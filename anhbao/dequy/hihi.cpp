#include <bits/stdc++.h>
using namespace std;

int*A;

bool SoCo3Uoc(int a);

void inra(int n){
    for(int i=0;i<n;i++){
        if(SoCo3Uoc(A[i])){
            cout<<A[i]<<' ';
        }
    }
}

int main(){
    int n;
    cin>>n;
    A=new int[n];
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    inra(n);
    delete[] A;
}