#include <bits/stdc++.h>
using namespace std;
int n;
using MT=unsigned long long;
vector<bool>a;//đánh dâu nếu số đã có trong mảng
//mảng a lưu căn của a_i để tránh tràn bộ nhớ
int main(){
    freopen("SOCP.INP","r",stdin);
    freopen("SOCP.OUT","w",stdout);
    int n;
    cin>>n;
    a.resize(1000002,false);
    MT a_i;
    long double tmp;
    for(int i=0;i<n;i++){
        cin>>a_i;
        tmp=sqrt(a_i);
        if(tmp==MT(tmp)){
            a[tmp]=(true);
        }
    }
    MT res=0;
    while(a[res])res++;
    cout<<res*res;
}