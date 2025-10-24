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
#define MT int
struct robot
{
    MT A;//A_i
    MT rp;//số lần đã chọn
    vector<MT> B;//danh sách những pháo sẽ bắn A lưu theo chỉ số
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
        cin>>A[i]->A;
    }
    for(int i=0;i<M;i++){
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
    sort(B.begin(),B.end(),[&](const Phao*&a,const Phao*&b){
        return (a->B)<(b->B);
    });
}
void clear(){

    for(auto&x:A){
        x->B.clear();
        x->rp=0;
    }
}
void Chon()//chọn số robot sẽ tấn công lưu vào vector A
{
    MT rp=0;
    vector<Phao*>::iterator itB=B.end();
    vector<robot*>::iterator itA;
    MT SoluongA;
    while(itB>B.begin()){
        rp++;
        SoluongA=0;
        while(SoluongA<N && itB>B.begin()){
            itB--;
            itA=min_element(A.begin(),A.end(),[&](const robot*&a,const robot*&b){
                if(a->rp>=rp)return false;
                if(b->rp>=rp)return true;
                return a->A<b->A;
            });
            SoluongA++;
        }
    }
}
double Solution(){
    return 0;
}
int main(){
    init();
    read();
    cout<<Solution();
}