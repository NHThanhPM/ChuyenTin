#include <bits/stdc++.h>
using namespace std;
int N;
vector<int> a;
int main(){
    freopen("INSUL.INP","r",stdin);
    freopen("INSUL.OUT","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>N;
    a.resize(N);
    unsigned long long res=0;
    for(int&x:a){
        cin>>x;
        res+=x;
    }
    sort(a.begin(),a.end());
    auto left=a.begin();
    auto right=a.end()-1;
    while (left<right)
    {
        res+=*right-*left;
        left++;
        right--;
    }
    cout<<res;
}