// #include <bits/stdc++.h>
#include <stdio.h>
#include <math.h>
using namespace std;

// #define ull long long
int n;
long long S;

int main(){
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    freopen("ASUM.INP","r",stdin);
    freopen("ASUM.OUT","w",stdout);
    scanf("%d %lld",&n,&S);

    long long a[n];
    for(int i=0;i<n;i++){
        scanf("%lld",a+i);
    }
    long long Tong=0;
    long long result=0;
    for(int i=0;i<n;i++){
        Tong=0;
        for(int j=i;j<n;j++){
            Tong+=a[j];
            // cout<<"["<<i<<","<<j<<"]:"<<Tong<<'\n';
            if(abs(Tong)>S)result++;
        }
    }
    printf("%lld",&result);
}