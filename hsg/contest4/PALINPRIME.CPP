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
void read(){
    string tmp;
    cin>>tmp;
    Len_L=tmp.size();
    L=stoull(tmp);
    cin>>tmp;
    Len_R=tmp.size();
    R=stoull(tmp);
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
    res=Len_R-Len_L+1;
    res-=(pow(10,Len_L)+1)<L;
    res-=(pow(10,Len_R)+1)>R;
}