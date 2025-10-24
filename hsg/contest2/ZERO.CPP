#include <bits/stdc++.h>
// #include <iostream>
// #include <map>
using namespace std;

void init(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    #define TASK "ZERO"
    if(fopen(TASK".INP","r")){
        freopen(TASK".INP","r",stdin);
        freopen(TASK".OUT","w",stdout);
    }
}

/**
 * cách giải tìm số lượng cơ số 2,cơ số 5 của từng số
 */

#define ull unsigned long long
ull a,b,cs2=0,cs5=0;

/**
 * \brief tìm số lượng cơ số hai
 */
ull f2(ull n){
    ull result=0;
    while(!(n&1)){
        n>>=1;
        result++;
    }
    return result;
}

/**
 * \brief tìm số lượng cơ số 5
 */
ull f5(ull n){
    ull result=0;
    while(n%5==0){
        n/=5;
        result++;
    }
    return result;
}

/**
 * \brief hàm đọc dữ liệu
 */
void read(){
    cin>>a>>b;
}

int main(){
    init();
    read();
    // cout<<f5(25)<<'\n';
    for(int i=a;i<=b;i++){
        cs2=max(cs2,f2(i));
        cs5=max(cs5,f5(i));
    }
    cout<<min(cs2,cs5);
}