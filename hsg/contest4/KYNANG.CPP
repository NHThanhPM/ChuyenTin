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
    #define TASK "KYNANG"
    if(!fopen(TASK".INP","r")){
        return;
    }
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    freopen(TASK".INP","r",stdin);
    freopen(TASK".OUT","w",stdout);
}
void read();
int handle();
int main(){
    init();
    read();
    return handle();
}
#define MT unsigned long long
MT n,m,*a,*b;
void read(){
    cin>>n>>m;
    a=new MT[n];
    b=new MT[m];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
}
int handle(){
    sort(b,b+m);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i]<b[j])break;
            a[i]+=b[j];
        }
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<' ';
    }
    return 0;
}