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
    #define TASK "BUCKET"
    if(fopen(TASK".INP","r")){
        freopen(TASK".INP","r",stdin);
        freopen(TASK".OUT","w",stdout);
    }
}

#define ull short
ull N;
map<char,ull> a;

/**
 * \brief đọc dữ liệu theo yêu cầu đề
 */
void read(){
    cin>>N;
    ull temp;
    for(ull i=0;i<N;i++){
        cin>>temp;
        a[temp]++;
    }
}
ull result=1;
set<ull> s;
void dequy(map<char,ull>::iterator i=a.begin(),ull Tong=0){
    if(i==a.end()){
        // cout<<Tong<<'\n';
        s.insert(Tong);
        return;
    }
    auto k=i++;
    dequy(i,Tong);
    for(ull j=0;j<k->second;j++){
        Tong+=k->first;
        dequy(i,Tong);
    }
}

void handle(){
    dequy();
    result--;
}

int main(){
    init();
    read();
    handle();
    cout<<s.size()-1;
    // return N;
}
