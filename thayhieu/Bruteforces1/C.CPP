/*
__________ __      __      __      ___     __ __      __
    ||     ||      ||     //\\     ||\\    || ||      ||
    ||     ||      ||    //  \\    || \\   || ||      ||
    ||     ||======||   //====\\   ||  \\  || ||======||
    ||     ||      ||  //      \\  ||   \\ || ||      ||
    ||     ||      || //        \\ ||    \\|| ||      ||
*/
#include <bits/stdc++.h>
// #include <iostream>
// #include <map>
using namespace std;

/**
 * \brief khởi tạo đổi luồng vào ra bằng file
 */
void init(){
    std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
    #define TASK "XEPGACH"
    if(fopen(TASK".INP","r")){
        freopen(TASK".INP","r",stdin);
        freopen(TASK".OUT","w",stdout);
    }
}
void read();
void handle();
int main(){
    init();
    read();
    handle();
}
//data
int m,n;
vector<vector<bool>> A;
vector<bool> F;//F[i] là cố gái chưa có người chọn
vector<int> tmp;//các cô gái mà chảng trai đẻ nhảy
void read(){
    cin>>m>>n;
    F=vector<bool>(m+1,true);
    tmp=vector<int>(n+1,0);
    bool tmp2;
    A=vector<vector<bool>>(m+1,vector<bool>(n+1,0));
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            cin>>tmp2;
            // F[j]+=tmp;
            A[i][j]=tmp2;
        }
    }
}
int Max=0;
vector<int>res;
void dequy(int Soluong,int ChangTrai){
    if(ChangTrai>n){
        if(Soluong>Max){
            Max=Soluong;
            res=tmp;
        }
        return;
    }
    for(int i=1;i<=m;i++){
        if(F[i]){
            F[i]=false;
            if(A[ChangTrai][i]){
                tmp[ChangTrai]=i;
                dequy(Soluong+1,ChangTrai+1);
                tmp[ChangTrai]=0;
            }
            F[i]=true;
        }
    }
}
void handle(){
    dequy(0,0);
    cout<<Max<<'\n';
    for(int i=1;i<res.size();i++){
        if(res[i])cout<<res[i]<<' ';
    }
}
