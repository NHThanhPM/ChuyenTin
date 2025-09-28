#include <bits/stdc++.h>
using namespace std;
int main(){
    int N,K;
    std::cin>>N>>K;
    int*b=new int[K];
    for(int i=0;i<K;i++){
        cin>>b[i];
    }
    vector<int> CacCach(K+1,0);
    CacCach[0]=1;
    int Vitri;
    for(int i=0;i<=K;i++){
        for(int j=0;j<K;j++){
            Vitri=i+b[j];
            if(Vitri)
        }
    }
}