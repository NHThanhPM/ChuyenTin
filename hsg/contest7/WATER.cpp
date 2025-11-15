/*                        \\
                           \\
__________ __      __      __      ___     __ __      __
    ||     ||      ||     //\\     ||\\    || ||      ||
    ||     ||      ||    //  \\    || \\   || ||      ||
    ||     ||======||   //====\\   ||  \\  || ||======||
    ||     ||      ||  //      \\  ||   \\ || ||      ||
    ||     ||      || //        \\ ||    \\|| ||      ||
*/
#include <bits/stdc++.h>
using namespace std;
void init(){
    #define TASK "WATER"
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    if(!fopen(TASK".INP","r")){
        return;
    }
    freopen(TASK".INP","r",stdin);
    freopen(TASK".OUT","w",stdout);
}
int n,k,res;
vector<int> pos;//pos[i] là vị trí cử số 0 thứ i
int SoLuongCayHeo=0;//số luongj số 0 đã nhập
void read(){
    cin>>n>>k;
    pos.resize(n+2);
    pos[0]=0;
    bool a;
    for(int j=1;j<=n;j++){
        cin>>a;
        if(!a){
            pos[++SoLuongCayHeo]=j;
        }
    }
    pos[++SoLuongCayHeo]=n+1;
}
void solution(){
    if(SoLuongCayHeo-2<=k){
        cout<<n;
        return;
    }
    int end=k+1;
    res=0;
    for(;end<=SoLuongCayHeo;end++){
        res=max(res,pos[end]-pos[end-k-1]);
    }
    cout<<res-1;
}
int main(){
    init();
    read();
    solution();
}