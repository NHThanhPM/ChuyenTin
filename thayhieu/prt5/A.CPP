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

double inp[6];

inline void prnt(const double&i){
    cout<<std::fixed<<std::setprecision(6)<<abs(i);
}

int main(){
    init();
    for(double&x:inp){
        cin>>x;
    }
    double tl=10e9;
    for(int i=3;i<6;i++){
        if(inp[i]!=0) tl=min(tl,inp[i-3]/inp[i]);
    }
    // cout<<tl<<'\n';
    for(int i=0;i<3;i++){
        prnt(inp[i]-tl*inp[i+3]);
        cout<<' ';
    }
}