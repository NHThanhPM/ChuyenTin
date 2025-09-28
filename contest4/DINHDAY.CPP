#include <bits/stdc++.h>
using namespace std;

#define task "DINHDAY"

int n,a[100001],T,rs[100001];

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    if(fopen(task".INP","r")){
        freopen(task".INP","r",stdin);
        freopen(task".OUT","w",stdout);
    }
    cin>>n;
    // return n;
    // a=new int[n+1];
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    T=0;
    for(int i=2;i<n;i++){
        if(a[i-1]<a[i] && a[i]>a[i+1]){
            rs[++T]=a[i];
            i++;
        }
    }
    // if(T<=0)return 0;
    cout<<T<<'\n';
    for(int i=1;i<=T;i++){
        cout<<rs[i]<<' ';
    }
    // cout<<rs[T];
    // delete[] a;
    return 0;
}