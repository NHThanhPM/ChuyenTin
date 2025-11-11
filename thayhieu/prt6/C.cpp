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
    #define TASK "C"
    if(!fopen(TASK".INP","r")){
        return;
    }
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    freopen(TASK".INP","r",stdin);
    freopen(TASK".OUT","w",stdout);
}
// X T D
int N;
string S;
int res=0;
char*left_char;
char*right_char;
void dao(char lt){
    right_char=(&S[0])+N-1;
    while(left_char<right_char){
        if(*left_char==lt)left_char++;
        else if(*right_char!=lt)right_char--;
        else{
            *right_char=*left_char;
            *left_char=lt;
            res++;
        }
    }
}
int main(){
    init();
    cin>>N;
    S.resize(N+1);
    S[N]='0';
    cin.get();
    cin.read(&S[0],N);
    // đổi chỗ xanh
    left_char=&S[0];
    dao('X');
    dao('T');
    dao('D');
    cout<<res;
}