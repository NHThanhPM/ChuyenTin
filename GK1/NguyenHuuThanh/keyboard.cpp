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
    #define TASK "keyboard"
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    if(!fopen(TASK".inp","r")){
        return;
    }
    freopen(TASK".inp","r",stdin);
    freopen(TASK".out","w",stdout);
}
string keyboard="qwertyuiop""asdfghjkl;""zxcvbnm,./";
int huong;
int main(){
    init();
    char tmp;
    cin>>tmp;
    if(tmp=='R'){
        huong=1;
    }else{
        huong=-1;
    }
    while(cin>>tmp){
        cout<<keyboard[keyboard.find(tmp)-huong];
    }
}