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
    #define TASK "C"
    if(!fopen(TASK".INP","r")){
        return;
    }
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    freopen(TASK".INP","r",stdin);
    freopen(TASK".OUT","w",stdout);
}
int n;
vector<int> a;
int main(){
    init();
    cin>>n;
    a.resize(n);
    int sum=0;
    int res=0;
    map<int,int> sl;
    sl[0]=1;
    for(int&x:a){
        cin>>x;
        sum+=x;
        res+=sl[sum];
        sl[sum]++;
    }
    cout<<res;
}