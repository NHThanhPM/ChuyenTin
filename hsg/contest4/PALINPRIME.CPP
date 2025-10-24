/*                        \\
                           \\
__________ __      __      __      ___     __ __      __
    ||     ||      ||     //\\     ||\\    || ||      ||
    ||     ||      ||    //  \\    || \\   || ||      ||
    ||     ||======||   //====\\   ||  \\  || ||======||
    ||     ||      ||  //      \\  ||   \\ || ||      ||
    ||     ||      || //        \\ ||    \\|| ||      ||
*/
#include <bits/stdc++.h>
using namespace std;
void init(){
    #define TASK "PALINPRIME"
    if(!fopen(TASK".INP","r")){
        return;
    }
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    freopen(TASK".INP","r",stdin);
    freopen(TASK".OUT","w",stdout);
}
void read();
int handle();
int main(){
    init();
    read();
    return handle();
}
#define MT unsigned long long
MT L,R,res=0,Len_L,Len_R;
string str_L;
string str_R;
void read(){
    // string tmp;
    cin>>str_L;
    Len_L=str_L.size();
    L=stoull(str_L);
    cin>>str_R;
    Len_R=str_R.size();
    R=stoull(str_R);
}
vector<bool> prime;
void PrimeSieve(int n){
    prime=vector<bool>(n+1,true);
    int sqrt_n=sqrt(n);
    for(int i=2;i<=sqrt_n;i++){
        if(prime[i]){
            for(int j=i*i;j<=n;j+=i){
                prime[j]=false;
            }
        }
    }
}
int Tong;
string num;
void addc(int n){
    if(n>=num.size()/2){
        for(num[n]='1';num[n]<='9';num[n]+=2){
            if(str_L<=num && num<=str_R){
                res+=prime[Tong+num[n]-'0'];
            }
        }
        return;
    }
    for(char i='0'+(n==0);i<='9';i++){
        Tong+=(i-'0')*2;
        num[n]=i;
        *(num.end()-1-n)=i;
        addc(n+1);
        Tong-=(i-'0')*2;
    }
}
int ht;
void check(int n)//kiểm tra tất cả số có n chữ số là số nguyên tố
{
    if(n==0){
        for(int i=1;i<10;i+=2){
            res+=prime[Tong+i];
        }
        return;
    }
    // n--;
    for(int i=0+(n==ht);i<=9;i++){
        Tong+=i*2;
        check(n-1);
        Tong-=i*2;
    }
}
int handle(){
    /**
     * 1001
     * 10001
     * 100001
     * 1000001
     * 1000.....1
     * nguyên tắc tổng chữ số là số nguyên tố
     * chữ số chính giữa phải là số lẻ
     * nếu không thì phải có dạng như trên
     */
    // res=Len_R-Len_L+1;
    // res-=(pow(10,Len_L)+1)<L;
    // res-=(pow(10,Len_R)+1)>R;
    //tổng chữ số tối đa
    PrimeSieve(9*Len_R);
    for(int ht=Len_L+1;ht<Len_R;ht++){
        res++;
        if(ht&1){
            ht>>=1;
            Tong=0;
            check(ht);
            ht<<=1;
            ht++;
        }
    }
    MT tmp=pow(10,Len_L-1)+1;
    res+=L<=tmp && tmp<=R;
    if(Len_L&1){
        num=string(Len_L,'0');
        addc(0);
    }
    if(Len_R&1 && Len_R!=Len_L){
        res+=pow(10,Len_R-1)+1>=R;
        num=string(Len_R,'0');
        addc(0);
    }
    cout<<res;
    return 0;
}