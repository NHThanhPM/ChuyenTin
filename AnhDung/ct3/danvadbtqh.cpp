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
    #define TASK "danvadbtqh"
    if(!fopen(TASK".inp","r")){
        return;
    }
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    freopen(TASK".inp","r",stdin);
    freopen(TASK".out","w",stdout);
}
class Solution{
private:
    int n,m,l,r;
public:
    void danvadbtqh();
    friend istream&operator>>(istream&in,Solution&a){
        cin>>a.n>>a.m>>a.l>>a.r;
        return in;
    }
};
int main(){
    init();
    int t;
    cin>>t;
    Solution res;
    for(int i=0;i<t;i++){
        cin>>res;
        res.danvadbtqh();
    }
}
void Solution::danvadbtqh(){
    while(true){
        if(n==m || l>=0)break;
        l++;
        n--;
        if(n==m || r<=0)break;
        r--;
        n--;
    }
    while(n!=m && l<0){
        l++;
        // r--;
        n--;
    }
    while(n!=m && r>0){
        // l++;
        r--;
        n--;
    }
    cout<<l<<' '<<r<<'\n';
}
