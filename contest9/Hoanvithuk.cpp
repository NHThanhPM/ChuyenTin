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
    #define TASK "BELCHER"
    if(!fopen(TASK".INP","r")){
        cout<<"Nhap Tu Ban Phim:"<<endl;
        return;
    }
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    freopen(TASK".INP","r",stdin);
    freopen(TASK".OUT","w",stdout);
}
void read();
void hd();//xu ly chinh
int main(){
    init();
    read();
    hd();
}
#define MT unsigned int
MT n,k;
void read(){
    cin>>n>>k;
}
void hd(){
    MT*a=new MT[n];
    for(int i=0;i<n;i++){
        a[i]=i+1;
    }
    for(MT i=1;i<k;i++){
        next_permutation(a,a+n);
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<' ';
    }
}