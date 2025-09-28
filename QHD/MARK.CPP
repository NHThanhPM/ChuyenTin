#include <bits/stdc++.h>
using namespace std;
int m,n;
vector<vector<int>> F;

int main(){
    freopen("MARK.INP","r",stdin);
    freopen("MARK.OUT","w",stdout);
    cin>>n>>m;
    F=vector<vector<int>>(n+2,vector<int>(m+1,-1e9));
    // vector<vector<int>> F=A;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>F[i][j];
        }
    }
    int LonNhat;
    for(int j=1;j<=m;j++){
        for(int i=1;i<=n;i++){
            LonNhat=max<int> (F[i-1][j-1],max(F[i][j-1],F[i+1][j-1]));
            cout<<LonNhat<<'\n';
            F[i][j]+=LonNhat;
        }
    }
    cout<<"klnkldfgklfd:\n";
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cout<<F[i][j]<<'\t';
        }
        cout<<'\n';
    }
    int Max=F[1][m];
    for(int i=2;i<=n;i++){
        Max=max(Max,F[i][m]);
    }
    cout<<"ketqua:\n";
    cout<<Max;
}