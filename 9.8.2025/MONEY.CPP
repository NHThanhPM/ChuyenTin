#include <bits/stdc++.h>
using namespace std;

int n,*tien;
int result=0;

void dequy(int TongWord,int TongExel,int vitri){
    if(vitri==n){
        if(TongWord==TongExel)result++;
        return;
    }
    dequy(TongWord+tien[vitri],TongExel,vitri+1);
    dequy(TongWord,TongExel+tien[vitri],vitri+1);
}

int main(){
    cin>>n;
    tien=new int[n];
    for(int i=0;i<n;i++){
        cin>>tien[i];
    }
    dequy(0,0,0);
    cout<<result;
}