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
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    if(!fopen(TASK".INP","r")){
        return;
    }
    freopen(TASK".INP","r",stdin);
    freopen(TASK".OUT","w",stdout);
}
int a;
int n,d;
long long res=0;
vector<int> qt(1000001,0);//qt[i] là số lương i đã xuất hiện từ a_0 đến j-d
int main(){
    init();
    cin>>n;
    // int*it;
    for(int j=0;j<n;j++){
        cin>>a;
        res+=qt[a]++;
        // qt[a]++;
    }
    cout<<res;
}