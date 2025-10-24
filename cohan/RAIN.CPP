#include <bits/stdc++.h>
using namespace std;

/**
 * \brief khởi tạo đổi luồng vào ra bằng file
 */
void init(){
    std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
    #define TASK "RAIN"
    if(fopen(TASK".INP","r")){
        freopen(TASK".INP","r",stdin);
        freopen(TASK".OUT","w",stdout);
    }
}

int N,a,b,Q,x,vt;
vector<int> LuongMua;

void TinhLuongMua(){
    if(LuongMua[x]!=-1){
        cout<<LuongMua[x]%int(1e9+7)<<'\n';
        return;
    }
    for(int i=vt+1;i<=x;i++){
        LuongMua[i]=(LuongMua[i-1]<<1)-LuongMua[i-2];
    }
    vt=x;
    cout<<LuongMua[x]%int(1e9+7)<<'\n';
}

int main(){
    init();
    cin>>N;
    LuongMua=vector<int>(N+1,-1);
    cin>>LuongMua[1]>>LuongMua[2]>>Q;
    vt=2;
    // cout<<'\n';
    for(int i=0;i<Q;i++){
        cin>>x;
        TinhLuongMua();
    }
}