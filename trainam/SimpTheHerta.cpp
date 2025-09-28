#include <bits/stdc++.h>

using namespace std;

int N,M,*a;
signed main(){
    cin>>N>>M;
    a=new int[N];
    for(int i=0;i<N;i++){
        cin>>a[i];
    }
    sort(a,a+N,greater<int>());
    //
    // cout<<"các số đã sắp xếp:";
    // for(int i=0;i<N;i++){
    //     cout<<a[i]<<' ';
    // }
    ///
    // cout<<'\n';
    int Max=0;
    int result=0;
    for(int i=0;i<N;i++){
        result+=a[i];
        for(int j=i+1;j<N;j++){
            result+=a[j];
            for(int k=j+1;k<N;k++){
                result+=a[k];
                if(result<=M){
                    // cout<<a[i]<<' '<<a[j]<<' '<<a[k]<<'\n';
                    // cout<<result;
                    Max=max(Max,result);
                    // return 0;
                }
                result-=a[k];
            }
            result-=a[j];
        }
        result-=a[i];
    }
    cout<<Max;
}