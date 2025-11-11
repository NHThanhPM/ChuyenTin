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
    #define TASK "QUERY"
    if(!fopen(TASK".INP","r")){
        return;
    }
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    freopen(TASK".INP","r",stdin);
    freopen(TASK".OUT","w",stdout);
}
int N,Q;
#define ULL unsigned long long
vector<ULL> sum;//sum[i] là tổng các phần tử tù a_1 đến a_i
void Xu1(int p,int m,int x){
    ULL dfr=0;
    for(;p<=m;p++){
        dfr+=x;
        sum[p]+=dfr;
    }
    for(;p<=N;p++){
        sum[p]+=dfr;
    }
}
void Xu2(int u,int v){
    cout<<sum[v]-sum[u-1]<<'\n';
}
int main(){
    init();
    //đọc dữu liệu
    cin>>N>>Q;
    sum.resize(N+1);
    sum[0]=0;
    for(int i=1;i<=N;i++){
        cin>>sum[i];
        sum[i]+=sum[i-1];
    }
    //vừa đọc dữ liệu vừa xử lý
    int type,d1,d2,d3;
    for(int i=0;i<Q;i++){
        cin>>type;
        if(type==1){
            cin>>d1>>d2>>d3;
            Xu1(d1,d2,d3);
        }else{
            cin>>d1>>d2;
            Xu2(d1,d2);
        }
    }
}