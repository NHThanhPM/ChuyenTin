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
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    //thuật toán kadane
    int max_cr=a[0];
    int result=a[0];
    for(int i=1;i<n;i++){
        max_cr=max(a[i],max_cr+a[i]);
        result=max(result,max_cr);
    }
    cout<<result;
}