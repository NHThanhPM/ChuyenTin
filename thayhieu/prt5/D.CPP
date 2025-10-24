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
    #define TASK "D"
    if(fopen(TASK".INP","r")){
        freopen(TASK".INP","r",stdin);
        freopen(TASK".OUT","w",stdout);
    }
}
string s;
unsigned long long k;
void read(){
    cin>>s>>k;
}
void handle(){
    int size=s.size()-k;
    string::iterator it=s.begin();
    string result;
    string::iterator end=s.end()-size+1;
    for(int i=0;i<size;i++){
        it=min_element(it,end);
        cout<<*it;
        it++;
        end++;
    }
    // string::iterator haha;

    // cout<<'\n';
    // cout<<result;
}
int main(){
    init();
    read();
    handle();
}
//345190