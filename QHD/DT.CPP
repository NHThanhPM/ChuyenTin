#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,S;
    cin>>n>>S;
    vector<int> a(n,0);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<int> F(S+1,1e9);
    // int MIN=1e9;
    for(int i=1;i<=S;i++){
        for(int j=0;j<n;j++){
            if(i>=a[j])
            F[i]=min(F[i],1+F[i-a[j]]);
        }
        // F[i]=MIN;
    }
    cout<<F[S];
}