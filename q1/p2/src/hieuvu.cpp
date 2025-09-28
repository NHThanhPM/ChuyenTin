#include <bits/stdc++.h>
using namespace std;
int n,k;
int*a;
int main(){
    cin>>n>>k;
    a=new int[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    int result=1;
    // cout<<"magdaxap:";
    // for(int i=0;i<n;i++){
    //     cout<<a[i]<<' ';
    // }
    // cout<<'\n';
    for(int*i=a;i<a+n;i++){
        int*end=upper_bound(a,a+n,*i);
        // cout<<"\nhihihi:"<<end-a;
        int*hk=lower_bound(a,a+n,*i+k);
        // cout<<"\nhownk:"<<hk-a;
        // if(hk>=a+n)break;
        if(*hk==*i+k){
            result+=(end-i)*(upper_bound(a,a+n,*i+k)-hk);
            i=end;
        }
    }
    delete[] a;
    cout<<result;
}