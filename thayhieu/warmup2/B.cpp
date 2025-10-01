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

/**
 * m=A+..B
 * từ A đến B có m số liên tiếp thì
 * m=A*m+(1+...+(m-1))
 */

int n,A,B;

int temp;//kêt quả phép chia
//kiểm tra tổng đó có hợp lệ không
bool check(int Tong,int m){
    temp=(n-Tong);
    if(temp%m==0){
        temp/=m;
        return true;
    }
    return false;
}

int main(){
    init();
    cin>>n;
    A=n;
    B=n;
    int Tong=1;/**
    tường ứng với 1+...+(m-1) đã giải thích như trên
     */
    int m=2;
    int i=2;//i chạy từ 2 dedeens vô hạn
    while(Tong<=n){
        // cout<<Tong<<":"<<m<<'\n';
        if(check(Tong,m)){
            //m càng tăng nên sẽ gán luôn
            A=temp;
            B=A+(m-1);
        }
        m++;
        Tong+=i;
        i++;
    }
    //
    cout<<n<<"="<<A<<"+...+"<<B;
}