#include <bits/stdc++.h>
using namespace std;

/**
 * \brief khởi tạo đổi luồng vào ra bằng file
 */
void init(){
    std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
    #define TASK "C"
    if(fopen(TASK".INP","r")){
        freopen(TASK".INP","r",stdin);
        freopen(TASK".OUT","w",stdout);
    }
}

int main(){
    init();
    int n;
    cin>>n;
    int a[n];
    cin>>a[0];
    int max_cr=a[0];
    int max_gl=a[0];
    int min_cr=a[0];
    int min_gl=a[0];
    int sum=a[0];
    for(int i=1;i<n;i++){
        cin>>a[i];
        max_cr=max(a[i],max_cr+a[i]);
        max_gl=max(max_gl,max_cr);
        min_cr=min(a[i],min_cr+a[i]);
        min_gl=min(min_cr,min_gl);
        sum+=a[i];
    }
    cout<<max(max_gl,sum-min_gl);
    //thuật toán kadane
    // for(int i=1;i<n;i++){
    // }
    // cout<<result;
}