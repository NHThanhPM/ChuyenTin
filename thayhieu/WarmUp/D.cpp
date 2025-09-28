#include <bits/stdc++.h>
using namespace std;

/**
 * \brief khởi tạo đổi luồng vào ra bằng file
 */
void init(){
    std::ios_base::sync_with_stdio(0);cin.tie(NULL);
    #define TASK "D"
    if(fopen(TASK".INP","r")){
        freopen(TASK".INP","r",stdin);
        freopen(TASK".OUT","w",stdout);
    }
}

map<char,int> S;
int N=0;


/**
 * \brief đọc dữ liệu
 */
void Data(){
    char temp;
    while(cin>>temp){
        S[temp]++;
        N++;
    }
}


/**
 * \brief số lượng cơ số K của N!
 */
int CoSo(int n,int K){
    int Sum=0;
    while(n>0){
        n/=K;
        Sum+=n;
    }
    return Sum;
}

/**
 * \brief chương trình chính
 */

int main(){
    init();
    Data();
    int c2=0;//tổng cơ số 2 ở
    int c5=0;//tổng cơ số 5 ở
    for(pair x:S){
        c2+=CoSo(x.second,2);
        c5+=CoSo(x.second,5);
    }
    c2=CoSo(N,2)-c2;
    c5=CoSo(N,5)-c5;
    cout<<min(c2,c5);
}