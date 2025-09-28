#include <bits/stdc++.h>
using namespace std;

int N;

int main(){
    freopen("cprime.inp","r",stdin);
    freopen("cprime.out","w",stdout);
    cin>>N;
    int sqrt_N=sqrt(N);
    if(N%2==0){
        cout<<"No";
        return 0;
    }
    for(int i=3;i<=sqrt_N;i+=2){
        if(N%i==0){
            cout<<"No";
            return 0;
        }
    }
    cout<<"Yes";
}