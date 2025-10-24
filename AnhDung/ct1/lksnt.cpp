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
    #define TASK "lksnt"
    if(!fopen(TASK".INP","r")){
        return;
    }
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    freopen(TASK".INP","r",stdin);
    freopen(TASK".OUT","w",stdout);
}
#define MT unsigned long long
vector<bool> snt;
MT L,R;
void read(){
    cin>>L>>R;
    snt=vector<bool>(R+1,1);
}
void sang(){
    MT sq=sqrt(R);
    for(int i=2;i<=sq;i++){
        for(int j=i*i;j<=R;j+=i){
            snt[j]=0;
        }
    }
}
int main(){
    init();
    read();
    sang();
    for(int i=L;i<=R;i++){
        if(snt[i])cout<<i<<' ';
    }
}