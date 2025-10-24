#include <bits/stdc++.h>
using namespace std;

/**
 * \brief khởi tạo đổi luồng vào ra bằng file
 */
void init(){
    std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
    #define TASK "TRONGSO"
    if(fopen(TASK".INP","r")){
        freopen(TASK".INP","r",stdin);
        freopen(TASK".OUT","w",stdout);
    }
}

int main(){
    init();
    const char root='a'-1;
    char temp;
    unsigned long long result=0;
    while(cin>>temp){
        result+=temp-root;
    }
    cout<<result;
}