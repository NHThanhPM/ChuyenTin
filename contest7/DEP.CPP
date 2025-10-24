/*
========== ||       ||      //\\     ||\\    || ||      ||
   ||      ||       ||     //  \\    || \\   || ||      ||
   ||      ||=======||    //====\\   ||  \\  || ||======||
   ||      ||       ||   //      \\  ||   \\ || ||      ||
   ||      ||       ||  //        \\ ||    \\|| ||      ||
*/
// #include <bits/stdc++.h>
#include <iostream>
#include <map>
using namespace std;

/**
 * \brief khởi tạo đổi luồng vào ra bằng file
 */
void init(){
    std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
    #define TASK "DEP"
    if(fopen(TASK".INP","r")){
        freopen(TASK".INP","r",stdin);
        freopen(TASK".OUT","w",stdout);
    }
}

#define ull long long
ull N;
ull*a;

/**
 * \brief đọc dữ liệu theo yêu cầu đề
 */
void read(){
    cin>>N;
    a=new ull[N];
    for(int i=0;i<N;i++){
        cin>>a[i];
    }
}

ull max_global=-10e9;
void handle(){
    ull max_current;
    int i=0;
    bool haha=true;
    while(i<N){
        while(i<N){
            if(a[i]%3!=0){
                haha=false;
                break;
            }
            i++;
        }
        max_current=-10e9;
        while(i<N){
            if(a[i]%3==0)break;
            max_current=max(max_current+a[i],a[i]);
            max_global=max(max_current,max_global);
            i++;
        }
    }
    if(haha)max_global=0;
}

int main(){
    init();
    read();
    handle();
    cout<<max_global;
}