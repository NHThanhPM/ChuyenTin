#include <bits/stdc++.h>
using namespace std;
int n,m,*a;


int main(){
    ofstream log("BAG.log",ios::out);
    freopen("BAG.INP","r",stdin);
    freopen("BAG.OUT","w",stdout);
    cin>>n>>m;
    a=new int[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    vector<int> cachchon(m+1,0);
    cachchon[0]=1;
    
    for(int i=1;i<=a[n-1];i++){
        for(int j=0;a[j]<=i && j<n;j++){
            cachchon[i]+=cachchon[i-a[j]];
        }
    }
    for(int i=a[n-1]+1;i<=m;i++){
        for(int j=0;j<n;j++){
            cachchon[i]+=cachchon[i-a[j]];
        }
    }
    cout<<cachchon[m];
    for(int i=0;i<=m;i++){
        log<<cachchon[i]<<' ';
    }
    // for(int i=0;i<=m;i++){
    //     cout<<cachchon[i]<<' ';
    // }
    // fclose(stdout);
}