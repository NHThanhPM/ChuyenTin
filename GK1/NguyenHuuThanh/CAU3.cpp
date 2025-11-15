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
    #define TASK "CAU3"
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    if(!fopen(TASK".INP","r")){
        return;
    }
    freopen(TASK".INP","r",stdin);
    freopen(TASK".OUT","w",stdout);
}
map<int,int> Sodu;//lưu vị trí số dư và tổng
int N,K,res,sum;
int main(){
    init();
    cin>>N>>K;
    int a;
    Sodu[0]=0;
    sum=0;
    res=0;
    map<int,int>::iterator  it;
    // cout<<(Sodu.end()==Sodu.find(1));
    for(int i=1;i<=N;i++){
        cin>>a;
        sum+=a;
        it=Sodu.find(sum%K);
        if(it!=Sodu.end()){
            res=max(res,sum-it->second);
        }else{
            Sodu[a]=sum;
        }
    }
    cout<<res/K;
}