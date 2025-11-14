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
    #define TASK "Chiahetk"
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    if(!fopen(TASK".inp","r")){
        return;
    }
    freopen(TASK".inp","r",stdin);
    freopen(TASK".out","w",stdout);
}
#define ULL int
ULL n,k,sum=0,res=0;;
map<ULL,ULL> SoDu;
// map<ULL,ULL> sum;
int main(){
    init();
    cin>>n>>k;
    // SoDu.resize(k,0);
    SoDu[0]=1;
    ULL tmp;
    int*it;
    for(ULL i=0;i<n;i++){
        cin>>tmp;
        sum+=tmp;
        sum%=k;
        if(sum<0)sum+=k;
        it=&SoDu[sum];
        res+=*it;
        (*it)++;
    }
    cout<<res;
}