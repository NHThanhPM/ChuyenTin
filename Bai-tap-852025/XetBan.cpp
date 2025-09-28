#include <bits/stdc++.h>
using namespace std;

int A[100][100],KT[100];
int n,Nhom=0;
void XuLy(int i){
    KT[i]=1;
    for(int j=0;j<n;j++){
        if(A[i][j]==1 && KT[j]==0){
            XuLy(j);
        }
    }
}
int main(){
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>A[i][j];
        }
    }
    for(int i=0;i<n;i++){
        KT[i]=0;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(KT[j]==0){
                Nhom++;
                XuLy(j);
            }
        }
    }
    cout<<"SoNhom:"<<Nhom;
}