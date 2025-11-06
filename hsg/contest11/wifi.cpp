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
    #define TASK "wifi"
    if(!fopen(TASK".INP","r")){
        return;
    }
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    freopen(TASK".INP","r",stdin);
    freopen(TASK".OUT","w",stdout);
}
#define MT long double
MT N,A,B,res;
vector<MT> x;
void read(){
    // sum=0;
    cin>>N>>A>>B;
    x.resize(N);
    for(MT&e:x){
        cin>>e;
        // sum+=e;
    }
}
MT solution(){
    sort(x.begin(),x.end());
    res=A+B*(x[N-1]-x[0])/2;
    MT kk;
    for(int i=1;i<N;i++){
        kk=B*(x[i]-x[i-1])/2;
        if(kk>A){
            res=res+A-kk;
            // i++;
        }
    }
    return res;
}
int main(){
    init();
    read();
    cout<<solution();
}