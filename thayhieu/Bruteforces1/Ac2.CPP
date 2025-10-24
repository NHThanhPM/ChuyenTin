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
vector<long long> a;
int n;
void read(){
    cin>>n;
    a.resize(n);
    // int tmp;
    for(int i=0;i<n;i++){
        cin>>a[i];
        // a.insert(tmp);
    }
    sort(a.begin(),a.end());
    // a.resize(unique(a.begin(),a.end())-a.begin());
}
vector<long long> res;
void dequy(int i,long long Tong){
    if(i>=a.size()){
        res.push_back(Tong);
        return;
    }
    //không chọn
    dequy(i+1,Tong);
    //chọn
    dequy(i+1,Tong+a[i]);
}
void handle(){
    dequy(0,0);
    sort(res.begin(),res.end());
    auto end=unique(res.begin(),res.end());
    cout<<end-res.begin()<<'\n';
    for(auto i=res.begin();i<end;i++){
        cout<<*i<<' ';
    }
}