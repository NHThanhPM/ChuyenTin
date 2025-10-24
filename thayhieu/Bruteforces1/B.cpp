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
vector<int> a;
int n,s;
void read(){
    cin>>n>>s;
    a.resize(n);
    // int tmp;
    for(int i=0;i<n;i++){
        cin>>a[i];
        // a.insert(tmp);
    }
    sort(a.begin(),a.end());
    a.resize(unique(a.begin(),a.end())-a.begin());
}
// int nmask;
void handle(){
    vector<int> res={0};
    int n=1;
    for(int x:a){
        for(int i=0;i<n;i++){
            res.push_back(x+res[i]);
            // tmp.insert(x+y);
        }
        n=res.size();
        // res=tmp;
    }
    sort(res.begin(),res.end());
    auto end=unique(res.begin(),res.end());
    cout<<*(upper_bound(res.begin(),end,s)-1);
    // cout<<end-res.begin()<<'\n';
    // for(auto i=res.begin();i<end;i++){
    //     cout<<*i<<' ';
    // }
    //
    // nmask=1<<n;
    // for(int mask=0;mask<nmask;mask++){

    // }
}