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
    #define TASK "THUASONT"
    if(!fopen(TASK".INP","r")){
        return;
    }
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    freopen(TASK".INP","r",stdin);
    freopen(TASK".OUT","w",stdout);
}
#define MT unsigned long long
int main(){
    init();
    MT n;
    cin>>n;
    map<MT,MT> thuaso;//luuw các thùa số và số lần suất hiện
    div_t tmp;
    int i=2;
    while(n!=1){
        tmp=div(n,i);
        if(tmp.rem==0){
            n=tmp.quot;
            thuaso[i]++;
        }
        else{
            i++;
        }
    }
    for(auto x:thuaso){
        cout<<x.first<<' '<<x.second<<'\n';
    }
}