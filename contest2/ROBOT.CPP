#include <bits/stdc++.h>
using namespace std;

int m,n;
int S[201][201];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("ROBOT.INP","r",stdin);
    freopen("ROBOT.OUT","w",stdout);
    cin>>m>>n;
    // cout<<'\n'<<INT_MIN;
    for(int i=1;i<=m;i++){
        S[i][0]=INT_MAX;
        for(int j=1;j<=n;j++){
            S[0][j]=INT_MAX;
            cin>>S[i][j];
        }
    }
    S[0][0]=0;
    S[1][0]=0;
    S[0][1]=0;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            S[i][j]+=min(S[i-1][j],S[i][j-1]);
        }
    }
    cout<<S[m][n];
}