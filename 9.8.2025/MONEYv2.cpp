#include <bits/stdc++.h>
using namespace std;

int n,dem=0;
bool X[20];
int tien[20];
int ta=0,tb=0;

void xet(int i){
    for(int j=0;j<=1;j++){
        X[i]=j;
        if(i==n-1){
            ta=0;tb=0;
            for(int k=0;k<n;k++){
                if(X[k])ta+=tien[k];
                else tb+=tien[k];
            }
            if(ta==tb)dem++;
        }
        else{
            xet(i+1);
        }
    }
}

int main(){
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>tien[i];
    }
    xet(0);
    cout<<dem;
}