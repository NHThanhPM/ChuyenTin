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
    #define TASK "CHIAK"
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    if(!fopen(TASK".INP","r")){
        return;
    }
    freopen(TASK".INP","r",stdin);
    freopen(TASK".OUT","w",stdout);
}
map<int,int> sum;//tổng sức mạnh lính của một nhóm
long long total=0;//tổng sức mạnh của cả đám
int n;
long long res=0;
vector<int> a;
int main(){
    init();
    cin>>n;
    a.resize(n);
    for(int&x:a){
        cin>>x;
    }
    int b;
    for(int i=0;i<n;i++){
        cin>>b;
        total+=b;
        sum[a[i]]+=b;
    }
    for(auto&x:sum){
        total-=x.second;
        res+=x.second*total;
    }
    cout<<res;
}