#include <bits/stdc++.h>
using namespace std;

int n,k,*a;

int main(){
    freopen("EXPRESS.INP","r",stdin);
    freopen("EXPRESS.OUT","w",stdout);
    cin>>n>>k;
    a=new int[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a+1,a+n,greater<int>());
    long long Tong=a[0];
    for(int i=1;i<=k;i++){
        Tong+=a[i];
    }
    for(int i=k+1;i<n;i++){
        Tong-=a[i];
    }
    cout<<Tong;
}