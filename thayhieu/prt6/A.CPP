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
    #define TASK "A"
    if(!fopen(TASK".INP","r")){
        return;
    }
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    freopen(TASK".INP","r",stdin);
    freopen(TASK".OUT","w",stdout);
}
#define MT unsigned long long
MT res=0;
struct Ng{
    MT t,d;
    friend bool operator<(Ng&a,Ng&b){
        if(a.t<b.t)return true;
        if(a.t==b.t)return a.d<b.d;
        return false;
    }
};
int main(){
    init();
    int n;
    cin>>n;
    vector<Ng> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i].t>>a[i].d;
    }
    sort(a.begin(),a.end());
    for(Ng&x:a){
        res=max(res,x.t)+x.d;
    }
    cout<<res;
}