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
    #define TASK "banh"
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    if(!fopen(TASK".inp","r")){
        return;
    }
    freopen(TASK".inp","r",stdin);
    freopen(TASK".out","w",stdout);
}
#define MT int
MT n;
vector<MT>a;
bool check(MT x){
    for(MT i=1;i<=x;i++){
        if(a[x-i]>a[n-i]/2)return false;
    }
    return true;
}
int main(){
    init();
    cin>>n;
    a.resize(n);
    for(MT&x:a)cin>>x;
    sort(a.begin(),a.end());
    // xuwr lys
    MT left=0;
    MT right=(n>>1)-1;
    MT mid=right;
    while(left<right){
        if(check(mid)){
            left=mid;
        }else{
            right=mid-1;
        }
        mid=ceil(double(left+right)/2);
    }
    cout<<mid;
}