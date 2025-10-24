/*
========== ||       ||      //\\     ||\\    || ||      ||
   ||      ||       ||     //  \\    || \\   || ||      ||
   ||      ||=======||    //====\\   ||  \\  || ||======||
   ||      ||       ||   //      \\  ||   \\ || ||      ||
   ||      ||       ||  //        \\ ||    \\|| ||      ||
*/
#include <bits/stdc++.h>
using namespace std;

/**
 * \brief khởi tạo đổi luồng vào ra bằng file
 */
void init(){
    std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
    #define TASK "BIENDOI"
    if(fopen(TASK".INP","r")){
        freopen(TASK".INP","r",stdin);
        freopen(TASK".OUT","w",stdout);
    }
}

#define ull unsigned long long
string s;
ull n,i;

/**
 * \brief đọc dữ liệu theo yêu cầu đề
 */
void read(){
    cin>>s>>n>>i;
}

int main(){
    init();
    read();
    ull Tong=0;
    ull j=-1;
    while(Tong<i){
        Tong+=pow(s[++j]-'0',n);
    }
    cout<<s[j];
}