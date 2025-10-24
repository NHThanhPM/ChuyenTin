#include <bits/stdc++.h>
// #include <iostream>
// #include <map>
using namespace std;

void init(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    #define TASK "ZERO"
    if(fopen(TASK".INP","r")){
        freopen(TASK".INP","r",stdin);
        freopen(TASK".OUT","w",stdout);
    }
}

int n,q,*p;
int *f;//mảng cộng dồn hậu tố

void read(){
    cin>>n>>q;
    p=new int[n+1];
    for(int i=1;i<=n;i++){
        cin>>p[i];
    }
    sort(p,p+n);
}

int main(){
    init();
    read();
    f=new int[n+2];
    f[n+1]=0;
    f[n]=p[n]*0.9;
    f[n-1]=p[n-1]*0.9;
    for(int i=n-2;i>0;i--){
        f[i]=min(
            p[i+1]+p[i+2]+f[i+3]//nếu chọn ba cái liên tiếp
            ,int(p[i]*0.9)+f[i+1]//nếu không chọn
        );
    }
    cout<<f[1];
}