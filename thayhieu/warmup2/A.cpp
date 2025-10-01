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

long long n;

int TongChuSo(long long a){
    int result=0;
    while(a){
        result+=a%10;
        a/=10;
    }
    return result;
}

long long Tmax=1;
long long result=1;
void update(long long i){
    int tcs=TongChuSo(i);
    if(tcs>Tmax){
        result=i;
        Tmax=tcs;
    }else if(tcs==Tmax && i<result){
        result=i;
    }
}

int main(){
    init();
    cin>>n;
    //duyệt tới căn n
    long long sqrt_n=sqrt(n);
    // long long temp_tcs;
    // long long temp_so;
    for(int i=1;i<=sqrt_n;i++){
        if(n%i==0){
            update(i);
            update(n/i);
        }
    }
    cout<<result;
}