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
    #define TASK "CIRCHAR"
    if(!fopen(TASK".INP","r")){
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
string s;
void read(){
    cin>>s;
}
void hd(){
    for(int i=0;i<s.size();i++){
        cout<<s.substr(i)<<s.substr(0,i)<<'\n';
    }
}