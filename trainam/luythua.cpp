#include <bits/stdc++.h>

using namespace std;

int n;
int *l,*r;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen(".inp","r",stdin);
    freopen(".out","w",stdout);
    cin>>n;
    l=new int[n];
    r=new int[n];
    for(int i=0;i<n;i++){
        cin>>l[i]>>r[i];
    }
    return 0;
}