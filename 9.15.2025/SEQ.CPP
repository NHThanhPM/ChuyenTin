#include <bits/stdc++.h>
using namespace std;

#define ull unsigned long long

ull n,m,a_0,a_1,a_n;

// ull sodu(long long a,long long b)
// {
// 	long long temp=a%b;
// 	// cout<<temp<<'\n';
// 	// cout<<(-6)%5<<'\n';
// 	return (temp>=0)?temp:b+temp;
// }
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("SEQ.INP","r",stdin);
    freopen("SEQ.OUT","w",stdout);
    cin>>n>>m;
    // a=new ull[n+1];
    a_0=1%m;
    a_1=6%m;
    //// tìm số a[n]
	long long temp;
    for(ull i=2;i<=n;i++){
        temp=6*a_1-9*a_0;
        temp%=m;
        if(temp<0)a_n=temp+m;
        else a_n=temp;
        a_0=a_1;
        a_1=a_n;
    }
    //
    // cout<<a[n]<<'\n';
    // cout<<LONG_LONG_MAX<<'\n';
    cout<<a_n;
}

// int main(){
// 	cout<<sodu(-6,5);
// }
