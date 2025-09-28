#include <bits/stdc++.h>

//so luong xau nhi phan do dai n la fibonaci(n) voi F[0]=1;F[1]=2
using namespace std;
int N;

int Fibonaci(int a){
    int t0=1;
    int t1=2;
    //t2= 01 10 00
    //t3= 000 101 010 100 001
    int result;
    for(int i=2;i<=N;i++){
        result=t0+t1;
        t0=t1;
        t1=result;
    }
    
    return result;
}

int main(){
    cin>>N;
    cout<<Fibonaci(N)%(int(pow(10,9))+7);
}