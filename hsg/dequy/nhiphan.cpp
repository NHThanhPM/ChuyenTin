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
    #define TASK "nhiphan"
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
int n;
string NhiPhan;
void read(){
    cin>>n;
    NhiPhan.resize(n);
}

void Chon(int i){
    if(i<n){
        NhiPhan[i]='0';
        Chon(i+1);
        NhiPhan[i]='1';
        Chon(i+1);
    }
    else{
        cout<<NhiPhan<<'\n';
    }
}
void handle(){
    Chon(0);
}