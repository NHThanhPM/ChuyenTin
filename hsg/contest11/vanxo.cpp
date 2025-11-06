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
    #define TASK "fib"
    if(!fopen(TASK".INP","r")){
        return;
    }
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    freopen(TASK".INP","r",stdin);
    freopen(TASK".OUT","w",stdout);
}
//B   C   D   E   F   G   A
//0   1   2   3   4   5   6
string NotNhac="BCDEFGA";
int n;
int main(){
    init();
    cin>>n;
    //fibonaci
    unsigned long long *a=new unsigned long long[n+3]{1,1,2};
    for(int i=3;i<=n;i++){
        a[i]=a[i-1]+a[i-2];
    }
    cout<<NotNhac[a[n]%7];
}