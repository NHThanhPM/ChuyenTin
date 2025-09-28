#include <bits/stdc++.h>
using namespace std;
/**
 * f(x+1)/f(x)<1
 * <=>
 * f(x+1)<f(x)
 * <=>
 * x%10==9
 */

int n;

int main(){
    freopen("BPT.INP","r",stdin);
    freopen("BPT.OUT","w",stdout);
    cin>>n;
    if(n<9){
        cout<<0;
        return 0;
    }
    int cuoi=n;
    if(cuoi%10!=9){
        cuoi-=(cuoi%10) +1;
    }
    cout<<(cuoi-9)/10 +1;
}