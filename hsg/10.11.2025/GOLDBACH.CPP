#include <bits/stdc++.h>
using namespace std;
#define Max 1000000000001;
// vector<bool> snt(Max+1,true);
#define ULL unsigned long long
int n;
vector<ULL> k;
bool check(ULL x){
    if(!(x&1))return false;
    for(ULL i=3;i<=sqrt(x);i+=2){
        if(x%i==0)return false;
    }
    return x>=2;
}
void solution(ULL x){
    for(ULL i=3;i<=x/2;i+=2){
        if(check(i) && check(x-i)){
            cout<<i<<' '<<x-i<<'\n';
            return;
        }
    }
    cout<<"NO\n";
}
int main(){
    freopen("GOLDBACH.INP","r",stdin);
    freopen("GOLDBACH.OUT","w",stdout);
    cin>>n;
    ULL x;
    for(int i=0;i<n;i++){
        cin>>x;
        solution(x);
    }
}