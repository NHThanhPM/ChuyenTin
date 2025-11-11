#include <bits/stdc++.h>
using namespace std;
#define ULL unsigned long long
vector<ULL> snt;
bool check(ULL i){
    ULL Max=sqrt(i);
    for(ULL x:snt){
        if(x>Max)return true;
        if(i%x==0)return false;
    }
    return true;
}
int main(){
    freopen("SNT.list","w",stdout);
    cout.tie(0);
    // ULL Max;
    for(ULL i=2;i<=1000000000;i++){
        if(check(i)){
            snt.push_back(i);
            cout<<i<<endl;
        }
    }
    // for(ULL x:snt){
    //     cout<<x<<'\n';
    // }
}