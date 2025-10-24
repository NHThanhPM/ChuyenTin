#include <bits/stdc++.h>
using namespace std;

/**
 * \brief khởi tạo đổi luồng vào ra bằng file
 */
void init(){
    std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
    #define TASK "B"
    if(fopen(TASK".INP","r")){
        freopen(TASK".INP","r",stdin);
        freopen(TASK".OUT","w",stdout);
    }
}

#define ull unsigned long long
ull N;

int main(){
    init();
    while(cin>>N){
        // cout<<N<<':';
        cout<<__builtin_popcountll(N-1)%3<<'\n';
    }
}