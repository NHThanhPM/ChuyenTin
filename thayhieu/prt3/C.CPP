#include <bits/stdc++.h>
using namespace std;

#define rmod 10000

uint32_t *a=new uint32_t[2*rmod];
uint32_t n;

#define log(a,b) log(a)/log(b)

int main(){
    cin>>a[0]>>n;
    a[0]%=rmod;
    uint32_t i;
    for(i=1;i<n;i++){
        a[i]=a[i-1]*a[i-1];
        a[i]%=rmod;
        if(a[i]==a[0])break;
    }
    n--;
    // if(i==n){
    //     cout<<a[i];
    //     return 0;
    // }
    n%=i;
    cout<<a[n];
}