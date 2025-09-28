#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>> a(n+1,vector<int>(m+1,0));
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>a[i][j];
        }
    }
    // cout<<"...\n";
    for(int i=1;i<n;i++){
        for(int j=1;j<=m;j++){
            a[i][j]+=max(a[i-1][j],a[i][j-1]);
            // cout<<a[i][j]<<' ';
        }
        // cout<<'\n';
    }
    int Max=0;
    for(int i=1;i<=m;i++){
        a[n][i]+=a[n-1][i];
        Max=max(Max,a[n][i]);
        // cout<<a[n][i]<<' ';
    }
    // // cout<<'\n';
    // for(int i=2;i<=m;i++){
    // }
    cout<<Max;
}