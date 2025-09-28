#include <bits/stdc++.h>
using namespace std;

int N;

int*A;
int*B;

void Sinh(int vt=0,int m=0){
    if(vt>=N){
        //in ra;
        if(m<1){
            cout<<"{}\n";
            return;
        }
        cout<<"{"<<B[0];
        for(int i=1;i<m;i++){
            if(B[i]!=0)
            cout<<','<<B[i];
        }
        cout<<"}\n";
        return;
    }
    Sinh(vt+1,m);
    B[m]=A[vt];
    Sinh(vt+1,m+1);
}

int main(){
    cin>>N;
    A=new int[N];
    for(int i=0;i<N;i++){
        cin>>A[i];
    }
    B=new int[N];
    Sinh();
    delete[] B;
    delete[] A;
}