#include <bits/stdc++.h>
using namespace std;
#define Max 1000000000001;
// vector<bool> snt(Max+1,true);
int main(){
    bitset<Max> snt;
    for(unsigned long long i=0;i<=Max;i++){
        snt[i]=true;
    }
    for(unsigned long long i=2;i<sqrt(Max);i++){
        if(snt[i]){
            for(unsigned long long j=i*i;j<=Max;j+=i){
                snt[j]=false;
            }
        }
    }
    for(unsigned long long i=2;i<=Max;i++){
        cout<<i<<' ';
    }
}