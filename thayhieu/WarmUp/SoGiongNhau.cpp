#include <bits/stdc++.h>
using namespace std;

int N,a[101],S=0,bg[10001],ed[10001];


int main(){
    cin>>N;
    // a=new int[N];
    for(int i=1;i<=N;i++){
        cin>>a[i];
    }
    for(int i=1;i<=N;i++){
        for(int j=i+1;j<=N;j++){
            if(a[i]==a[j]){
                S++;
                bg[S]=i;
                ed[S]=j;
            }
        }
    }
    cout<<S;
    for(int i=1;i<=S;i++){
        cout<<'\n'<<bg[i]<<' '<<ed[i];
    }
}