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
ull X;


inline ull sl(ull p,ull x)//tính số lượng như công thức p^x+1 -1/p-1
{
    return (pow(p,x+1)-1)/(p-1);
}

int main(){
    init();
    while(cin>>X){
        if(X==0)return 0;
        ull sl2=((ull)pow(2,2*X+1)-1)%29;
        ull sl3=(((ull)pow(3,X+1)-1)%58)/2;
        ull sl167=(((ull)pow(167,X+1)-1)%4814)/166;
        cout<<(sl2*sl3*sl167)%29<<'\n';
    }
}