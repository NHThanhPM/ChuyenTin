/*
========== ||       ||      //\\     ||\\    || ||      ||
   ||      ||       ||     //  \\    || \\   || ||      ||
   ||      ||=======||    //====\\   ||  \\  || ||======||
   ||      ||       ||   //      \\  ||   \\ || ||      ||
   ||      ||       ||  //        \\ ||    \\|| ||      ||
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

short n,Tong=0;
char*h;
void read(){
    cin>>n;
    h=new char[n];
    for(int i=0;i<n;i++){
        cin>>h[i];
        Tong+=h[i];
    }
}

short GanNhat(){
    short c1=n;
    short c2=n;
    while(c1>1){
        if(Tong%c1==0)return c1;
        if(Tong%c2==0)return c2;
        c1--;
        c2++;
    }
    return c1;
}

void handle(){
    sort(h,h+n);
    short Cot=GanNhat();
    cout<<'\n'<<Cot<<'\n';
    short result=0;
    short TB=Tong/Cot;
    if(Cot<n){
        for(int i=n-Cot;i<n;i++){
            if(h[i]<Cot)result+=Cot-h[i];
        }
    }
    else{
        result=(Cot-n)*TB;
        for(int i=0;i<n;i++){
            if(h[i]<Cot)result+=Cot-h[i];
        }
    }
    cout<<result;
}