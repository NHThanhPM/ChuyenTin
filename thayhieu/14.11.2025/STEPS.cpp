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
    }
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    freopen(TASK".INP","r",stdin);
    freopen(TASK".OUT","w",stdout);
}
unsigned long long a[2]={0,0},k,n,hong;
unsigned long long res=1;
int main(){
    init();
    cin>>n>>k;
    cin>>hong;
    int i=1;//số bậc thang hỏng đã nhập
    int j=0;//số bậc thang dang tính
    while(true){
        j++;
        a[0]=a[1];
        a[1]=res;
        if(hong!=j){
            res=a[0]+a[1];
        }else{
            i++;
            res=0;
            if(i>=k || a[1]==0)break;
            cin>>hong;
        }
    }
    if(a[1]==0 && res==0){
        cout<<"0";
        return 0;
    }
    while(j<n){
        j++;
        a[0]=a[1];
        a[1]=res;
        res=a[0]+a[1];
    }
    cout<<res;
}