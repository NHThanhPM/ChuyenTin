#include <bits/stdc++.h>
using namespace std;

int n,*x;

int main(){
    cin>>n;
    x=new int[n];
    float temp;
    int UocLe=0;
    int UocChan=0;
    for(int i=0;i<n;i++){
        cin>>x[i];
        temp=sqrt(x[i]);
        if(temp==int(temp))UocLe++;
        else UocChan++;
    }
    cout<<UocChan<<'\n'<<UocLe;
}