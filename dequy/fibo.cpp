#include <bits/stdc++.h>
using namespace std;
int fibo(int a){
    if(a<=2)return a;
    return fibo(a-1)+fibo(a-2);
}

int main(){
    int n;
    cin>>n;
    cout<<fibo(n);
}