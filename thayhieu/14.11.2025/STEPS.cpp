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
    #define TASK "STEPS"
    if(!fopen(TASK".INP","r")){
        return;
        std::ios_base::sync_with_stdio(0);
        cin.tie(0);cout.tie(0);
    }
    freopen(TASK".INP","r",stdin);
    freopen(TASK".OUT","w",stdout);
}
#define ULL unsigned long long
int k,n,hong;
vector<ULL> a;
int main(){
    init();
    cin>>n>>k;
    a.resize(n+1);
    a[0]=1;
    int i=1;//số luongj k đã đọc
    cin>>hong;
    int j=2;
    if(hong==1){
        a[1]=0;
        if(k==1) goto new_loop;
    }else{
        a[1]=1;
    }
    for(;true;j++){
        if(j!=hong){
            a[j]=a[j-1]+a[j-2];
        }
        else{
            a[j]=0;
            i++;
            if(a[j-1]==0){
                cout<<"0";
                return 0;
            }
            if(i>k) goto new_loop;
            cin>>hong;
        }
        a[j]%=26051968;
    }
    new_loop:{};
    for(j++;j<=n;j++){
        a[j]=a[j-1]+a[j-2];
        a[j]%=26051968;
    }
    cout<<a[n];
}