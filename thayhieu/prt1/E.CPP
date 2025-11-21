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
    #define TASK "E"
    if(!fopen(TASK".INP","r")){
        return;
    }
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    freopen(TASK".INP","r",stdin);
    freopen(TASK".OUT","w",stdout);
}
int A,B,M;
// vector<int> rem;
int main(){
    init();
    cin>>A>>B>>M;
    rem.resize(min(B,M)+2);
    int rem[1]=A%M;
    int rem[2]=(rem_1*A)%M;
    int Mu=1;
    while(true){
        if(rem==rem_1){
            B%=Mu;
            break;
        }
        Mu++;
        if(Mu==B){
            cout<<rem;
            return 0;
        }
        rem=(rem*A)%M;
    }
    for(int i=2;i<=B;i++){
        rem=(rem*A)%M;
    }
    cout<<rem;
}