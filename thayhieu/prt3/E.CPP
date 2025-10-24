#include <bits/stdc++.h>
using namespace std;

/**
 * \brief khởi tạo đổi luồng vào ra bằng file
 */
void init(){
    std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
    #define TASK "E"
    if(fopen(TASK".INP","r")){
        freopen(TASK".INP","r",stdin);
        freopen(TASK".OUT","w",stdout);
    }
}

vector<multiset<uint32_t>> S;
uint32_t n;

int main(){
    init();
    cin>>n;
    S.resize(n);
    uint32_t temp;
    while(cin>>temp){
        S[0].insert(temp);
    }
    uint32_t Chuky;
    for(int i=1;i<n;i++){
        for(auto j=S[i-1].begin();j!=S[i-1].end();j++){
            S[i].insert(*j--);
        }
        S[i].insert(S[i-1].size());
        S[i].erase(0);
    }
    n--;
    for(auto i=S[n].begin();i!=S[n].end();i++){
        cout<<*i<<' ';
    }
}