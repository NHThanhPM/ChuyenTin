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
    #define TASK "CAU1"
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    if(!fopen(TASK".INP","r")){
        return;
    }
    freopen(TASK".INP","r",stdin);
    freopen(TASK".OUT","w",stdout);
}
int T,res;
void MayMan(){
    int tmp;
    while(res>=10){
        tmp=0;
        while(res){
            tmp+=res%10;
            res/=10;
        }
        res=tmp;
    }
}
int main(){
    init();
    cin>>T;
    // cout<<M;
    string num;
    for(int i=0;i<T;i++){
        cin>>num;
        res=0;
        for(char x:num)res+=x-'0';
        MayMan();
        cout<<"\n"<<res;
    }
}