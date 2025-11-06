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
    #define TASK "ATRISET"
    if(fopen(TASK".INP","r")){
        ios_base::sync_with_stdio(0);
        cin.tie(0);cout.tie(0);
        freopen(TASK".INP","r",stdin);
        freopen(TASK".OUT","w",stdout);
    }
}
int N;
vector<int> a;
void read(){
    cin>>N;
    a.resize(N);
    for(int&x:a){
        cin>>x;
    }
}
vector<int>::iterator max_i,max_k;
int res=0;
void solution(){
    vector<int>::iterator i,j,k,tmp;
    //sắp xeép để đảm báo *i<*j<*k để kiểm tra cho dễ
    sort(a.begin(),a.end());
    int Tong;
    for(i=a.begin();i<a.end();i++){
        j=i;
        for(k=i+2;k<a.end();k++){
            Tong=(*i+*k);
            if(Tong&1)continue;
            Tong>>=1;//Tong/=2
            j=upper_bound(j,k,Tong);
            if(*(j-1)==Tong){
                // j=tmp;
                max_i=i;
                max_k=k;
                res++;
            }
        }
    }
}
int main(){
    init();
    read();
    solution();
    cout<<res<<'\n';
    int Tong=*max_i+*max_k;
    cout<<Tong+(Tong>>1);
}