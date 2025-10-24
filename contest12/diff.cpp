/*
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
    #define TASK "diff"
    if(!fopen(TASK".INP","r")){
        return;
    }
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    freopen(TASK".INP","r",stdin);
    freopen(TASK".OUT","w",stdout);
}
void read();
int hd();//xu ly chinh
int main(){
    init();
    read();
    return hd();
}
int n,*a;
void read(){
    cin>>n;
    a=new int[n+1];
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
}
int imax=0;
int dmax=0;
int SoLuong=0;
bool check(int i,int j){
    set<int>arr;
    for(;i<=j;i++){
        arr.insert(a[i]);
    }
    SoLuong=j-i+1;
    cout<<arr.size()<<'\n';
    return arr.size()==SoLuong;
}
int hd(){
    for(int i=1;i<=n;i++){
        set<int>arr;
        for(int j=i;j<=n;j++){
            arr.insert(a[j]);
            int SoLuong=j-i+1;
            if(arr.size()==SoLuong){
                if(SoLuong>dmax){
                    dmax=SoLuong;
                    imax=i;
                }
            }
        }
    }
    cout<<imax<<'\n'<<dmax;
    return n;
}