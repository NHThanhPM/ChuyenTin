/*                        \\
                           \\
__________ __      __      __      ___     __ __      __
    ||     ||      ||     //\\     ||\\    || ||      ||
    ||     ||      ||    //  \\    || \\   || ||      ||
    ||     ||======||   //====\\   ||  \\  || ||======||
    ||     ||      ||  //      \\  ||   \\ || ||      ||
    ||     ||      || //        \\ ||    \\|| ||      ||
*/
#include <bits/stdc++.h>
using namespace std;
void init(){
    #define TASK "chiendich2701"
    if(!fopen(TASK".inp","r")){
        return;
    }
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    freopen(TASK".inp","r",stdin);
    freopen(TASK".out","w",stdout);
}
#define MT double
struct robot
{
    MT A;//A_i
    MT rp;//số lần đã chọn
    MT B;//Tổng sát thường sẽ gây ra cho A
};
struct Phao{
    MT B;//B_i
    vector<bool> A;//danh sách những robot có thể tấn công
};
MT N,M;
vector<robot*>A;
vector<Phao*>B;
// vector<vector<bool>>matrix;
void read(){
    cin>>N>>M;
    A.resize(N);
    B.resize(M);
    for(int i=0;i<N;i++){
        A[i]=new robot;
        cin>>A[i]->A;
    }
    for(int i=0;i<M;i++){
        B[i]=new Phao;
        cin>>B[i]->B;
        B[i]->A.resize(N);
    }
    // matrix.resize(M,vector<bool>(M,0));
    bool tmp;
    for(int i=0;i<M;i++){
        for(int j=0;j<N;j++){
            cin>>tmp;
            B[i]->A[j]=tmp;
            // matrix[i][j]=tmp;
        }
    }
    sort(B.begin(),B.end(),[&](const Phao*a,const Phao*b){
        return (a->B)>(b->B);
    });
}
void clear(){

    for(auto x:A){
        x->B=0;
        x->rp=0;
    }
}
MT SoLuongHoanThanh=0;
vector<robot*>::iterator min_element(vector<Phao*>::iterator itB){
    int i=0;
    for(;!(*itB)->A[i];i++);
    int res=i;
    for(i++;i<N;i++){
        if((*itB)->A[i]){
            if(A[i]->A==0)continue;
            if(A[i]->A<A[res]->A)res=i;
        }
    }
    return A.begin()+res;
}
void Chon()//chọn số robot sẽ tấn công lưu vào vector A
{
    MT rp=0;
    vector<Phao*>::iterator itB=B.end();
    vector<robot*>::iterator itA;
    MT SoluongA;
    while(itB!=B.begin()){
        rp++;
        SoluongA=0;
        while(SoluongA<N-SoLuongHoanThanh && itB!=B.begin()){
            itB--;
            itA=min_element(itB);
            (*itA)->rp++;
            (*itA)->B+=(*itB)->B;
            SoluongA++;
        }
    }
}
MT res=0;
double Solution(){
    SoLuongHoanThanh=0;
    vector<robot*>::iterator it;
    double time;
    while(SoLuongHoanThanh<N){
        clear();
        Chon();
        it=min_element(A.begin(),A.end(),[](const robot*a,const robot*b){
            if(a->B==0)return false;
            if(b->B==0)return true;
            return (a->A/a->B)<(b->A/b->B);
        });
        time=(*it)->A/(*it)->B;
        for(auto x:A){
            x->A-=time*x->B;
            if(x->A==0)SoLuongHoanThanh++;
        }
        res+=time;
    }
    return res;
}
int main(){
    init();
    read();
    cout<<Solution();
}