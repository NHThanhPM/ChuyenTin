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
    #define TASK "TANGQUA"
    if(!fopen(TASK".INP","r")){
        return;
    }
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    freopen(TASK".INP","r",stdin);
    freopen(TASK".OUT","w",stdout);
}
int N;
int vl=0;//giá trị của quà
int sl=0;//số luọng
int main(){
    init();
    cin>>N;
    int tmp;
    for(int i=0;i<N;i++){
        cin>>tmp;
        if(tmp>vl){
            vl=tmp;
            sl=1;
        }
        else if(vl==tmp){
            sl++;
        }
    }
    cout<<sl;
}