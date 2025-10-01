#include <bits/stdc++.h>
using namespace std;

/**
 * \brief khởi tạo đổi luồng vào ra bằng file
 */
void init(){
    std::ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    #define TASK "coffee"
    if(fopen(TASK".INP","r")){
        freopen(TASK".INP","r",stdin);
        freopen(TASK".OUT","w",stdout);
    }
}

map<string,int> GioPhut;

int main(){
    init();
    int n;
    cin>>n;
    string gio;
    string phut;
    for(int i=0;i<n;i++){
        cin>>gio>>phut;
        GioPhut[gio+" "+phut]++;
    }
    int result=0;
    for(auto x: GioPhut){
        result=max(result,x.second);
    }
    cout<<result;
}