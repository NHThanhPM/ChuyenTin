#include <bits/stdc++.h>
using namespace std;

int n,*a;

int main(){
    freopen("BANGSO.INP","r",stdin);
    freopen("BANGSO.OUT","w",stdout);
    cin>>n;
    a=new int[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<int> cong(n,0);
    vector<int> tru=cong;
    cong[0]=a[0];
    for(int i=1;i<n;i++){
        cong[i]=max(cong[i-1],tru[i-1]+a[i]);
        tru[i]=max(tru[i-1],cong[i-1]-a[i]);
    }
    delete[] a;
    cout<<max(cong[n-1],tru[n-1]);
}