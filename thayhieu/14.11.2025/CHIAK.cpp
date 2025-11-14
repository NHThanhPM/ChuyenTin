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
    #define TASK "CHIAK"
    if(!fopen(TASK".INP","r")){
        return;
    }
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    freopen(TASK".INP","r",stdin);
    freopen(TASK".OUT","w",stdout);
}
#define ULL long long
ULL n,k,sum=0,res=0;;
vector<ULL> SoDu;
// map<ULL,ULL> sum;
int main(){
    init();
    cin>>n>>k;
    SoDu.resize(k,0);
    SoDu[0]=1;
    ULL tmp;
    for(ULL i=0;i<n;i++){
        cin>>tmp;
        sum=(sum+tmp)%k;
        if(sum<0)sum+=k;
        res+=SoDu[sum];
        SoDu[sum]++;
    }
    cout<<res;
}