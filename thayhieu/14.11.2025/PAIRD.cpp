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
    #define TASK "PAIRD"
    if(!fopen(TASK".INP","r")){
        return;
    }
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    freopen(TASK".INP","r",stdin);
    freopen(TASK".OUT","w",stdout);
}
vector<int>a;
int n,d,res=0;
map<int,int> qt;//qt[i] là số lương i đã xuất hiện từ a_0 đến j-d
int main(){
    init();
    cin>>n>>d;
    a.resize(n);
    for(int i=0;i<d;i++){
        cin>>a[i];
    }
    for(int j=d;j<n;j++){
        cin>>a[j];
        qt[a[j-d]]++;
        res+=qt[a[j]];
    }
    cout<<res;
}