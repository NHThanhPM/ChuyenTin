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
    #define TASK "A"
    if(!fopen(TASK".INP","r")){
        return;
    }
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    freopen(TASK".INP","r",stdin);
    freopen(TASK".OUT","w",stdout);
}
void read();
int handle();
int main(){
    init();
    read();
    return handle();
}
int n,m,x;
int*a;
void read(){
    cin>>n>>m;
    a=new int[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
}
int handle(){
    sort(a,a+n);
    for(int i=0;i<m;i++){
        cin>>x;
        cout<<binary_search(a,a+n,x)<<'\n';
    }
    return 0;
}