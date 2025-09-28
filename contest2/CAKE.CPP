#include <bits/stdc++.h>
using namespace std;

int n;
int a[1000][1000];

int main(){
    freopen("CAKE.INP","r",stdin);
    freopen("CAKE.OUT","w",stdout);
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    int TRaiDuoi=0;
    int PhaiTren=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            TRaiDuoi+=a[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            PhaiTren+=a[i][j];
        }
    }
    // cout<<"td:"<<TRaiDuoi<<'\n';
    // cout<<"pt:"<<PhaiTren<<'\n';
    cout<<max(TRaiDuoi,PhaiTren);
}