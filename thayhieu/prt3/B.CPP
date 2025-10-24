#include <bits/stdc++.h>
using namespace std;

/**
 * \brief khởi tạo đổi luồng vào ra bằng file
 */
void init(){
    std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
    #define TASK "A"
    if(fopen(TASK".INP","r")){
        freopen(TASK".INP","r",stdin);
        freopen(TASK".OUT","w",stdout);
    }
}

#define ull unsigned long long

ull x;
set<ull> T;

int main(){
    init();
    cin>>x;
    ull S=0;
    while(x){
        S=0;
        for(int i=0;S!=x;i++){
            S|=((x>>i)&1)<<i;
            // cout<<x<<' ';
        }
        T.insert(S);
        x>>=1;
    }
    ull result=0;
    for(ull ex:T){
        result+=ex;
    }
    cout<<result;
}