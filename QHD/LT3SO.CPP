/**
 * cho dãy n tính tổng lướn nhất khi chọn các số trong day
 * sao cho không chọn 3 số liên tiếp
 * test1:
 10
 7 8 6 2 5 9 30 10 5 8
 */

#include <bits/stdc++.h>
using namespace std;

int n;

int main(){
    cin>>n;
    int A[n+1],F[n+1];
    for(int i=1;i<=n;i++){
        cin>>A[i];
    }
    F[0]=0;
    F[1]=A[1];
    F[2]=A[1]+A[2];
    int Cach1;
    int Cach2;
    int Cach3;
    for(int i=3;i<=n;i++){
        Cach1=F[i-1];
        Cach2=A[i]+A[i-1]+F[i-3];
        Cach3=A[i]+F[i-2];
        F[i]=max(Cach1,max(Cach2,Cach3));
    }
    cout<<F[n];
}