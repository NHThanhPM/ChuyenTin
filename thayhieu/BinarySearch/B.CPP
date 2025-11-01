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
    #define TASK "B"
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
map<int,int> sl;
void read(){
    cin>>n>>m;
    a=new int[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        sl[a[i]]++;
    }
}
int handle(){
    for(int i=0;i<m;i++){
        cin>>x;
        cout<<sl[x]<<'\n';
    }
    return 0;
}