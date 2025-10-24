#include <bits/stdc++.h>
using namespace std;

/**
 * \brief khởi tạo đổi luồng vào ra bằng file
 */
void init(){
    std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
    #define TASK "F"
    if(fopen(TASK".INP","r")){
        freopen(TASK".INP","r",stdin);
        freopen(TASK".OUT","w",stdout);
    }
}

#define ull unsigned long long

ull A,B,C;

// ull sodu(ull a,ull b){
//     if(a<b)return a;
//     // ull x=sodu(a/10,b);
//     return (sodu(a/10,b)*10+(a%10))%b;
// }
signed main(){
    // init();
    cin>>A>>B>>C;
    // ull a=0;
    // a=~a;
    // cout<<a<<'\n';
    ull A_C=A%C;
    ull B_C=B%C;
    ull resutl=0;
    while(B_C){
        if(B_C & 1)//kiểm tả số lẻ
        {
            resutl=(resutl+A_C)%C;
        }
        A_C=(A_C<<1)%C;
        B_C>>=1;//chia cho 2
    }
    // ull temp=(A_C*10)%C;
    // for(ull/ i=0;i<B_C/10;i++){
        // resutl+=temp;
        // resutl%=C;
    // }
    // resutl+=A_C*(B_C%10);
    // resutl%=C;
    cout<<resutl;
    // cout<<((A%C)*(B%C))%C;
    //18446744073709551615
}