#include <bits/stdc++.h>
using namespace std;

/**
 * \brief khởi tạo đổi luồng vào ra bằng file
 */
void init(){
    std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
    #define TASK "A"
    if(fopen(TASK".INP","r")){
        freopen(TASK".INP","r",stdin);
        freopen(TASK".OUT","w",stdout);
    }
}

int A,B,M;

int main(){
    init();
    cin>>A>>B>>M;
    int result=1;
    A%=M;
    for(int i=1;i<=B;i++){
        result=(result*A)%M;
    }
    cout<<result;
}