#include <bits/stdc++.h>
using namespace std;

unsigned long long factor(int n){
    int result=1;
    for(int i=2;i<=n;i++){
        result*=i;
    }
    return result;
}
int n,k;

unsigned long long ToHopChap(int k){
    int result=1;
    for(int i=0;i<k;i++){
        result*=n-i;
    }
    return result/factor(k);
}

int main(){
    cin>>k>>n;
    cout<<ToHopChap(k);
}