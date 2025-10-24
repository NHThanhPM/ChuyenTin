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
    #define TASK "DIEMSO"
    if(!fopen(TASK".INP","r")){
        cout<<"Nhập từ bàn phím"<<endl;
        return;
    }
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    freopen(TASK".INP","r",stdin);
    freopen(TASK".OUT","w",stdout);
}
#define MT int
MT n;
// vector<MT>A;
map<MT,MT> current_sum;
MT max_sum=-10e9;
int main(){
    init();
    cin>>n;
    MT tmp;
    for(MT i=0;i<n;i++){
        cin>>tmp;
        current_sum[tmp];
        for(auto&x:current_sum){
            x.second+=tmp;
        }
        max_sum=max(max_sum,current_sum[tmp]);
    }
    cout<<max_sum;
}