#include <bits/stdc++.h>
using namespace std;

/**
 * \brief khởi tạo đổi luồng vào ra bằng file
 */
void init(){
    std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
    #define TASK "XAUCON"
    if(fopen(TASK".INP","r")){
        freopen(TASK".INP","r",stdin);
        freopen(TASK".OUT","w",stdout);
    }
}

long long N,K,result=0;
char*ST;

void read(){
    cin>>N>>K;
    ST=new char[N];
    for(int i=0;i<N;i++){
        cin>>ST[i];
    }
}

void chay(int i)//xét duyệt từ ST[i] đến hết có bao nhiêu xâu thỏa
{
    int Tong=0;
    while(i<N){
        Tong+=ST[i];
        if(Tong>=K){
            result+=N-i;
            return;
        }
        i++;
    }
}
int main(){
    init();
    read();
    int j=0;
    long long Tong=0;
    for(int i=0;i<N;i++){
        while(Tong<K){
            if(j>=N)goto ketqua;
            Tong+=ST[j];
            j++;
        }
        result+=N-(j-1);
        Tong-=ST[i];
    }
    ketqua:
    cout<<result;
    // return N;
}