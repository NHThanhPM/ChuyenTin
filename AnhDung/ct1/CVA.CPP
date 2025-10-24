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
    #define TASK "CVA"
    if(!fopen(TASK".INP","r")){
        return;
    }
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    freopen(TASK".INP","r",stdin);
    freopen(TASK".OUT","w",stdout);
}
#define C 0
#define CV 1
#define CVA 2
vector<unsigned long long> str(3,0);
int main(){
    init();
    char temp;
    while(cin>>temp){
        if(temp=='C'){
            str[C]++;
        }
        else if(temp=='V'){
            str[CV]+=str[C];
        }
        else if(temp=='A'){
            str[CVA]+=str[CV];
        }
    }
    cout<<str[CVA];
}