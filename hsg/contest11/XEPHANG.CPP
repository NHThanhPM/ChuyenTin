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
    #define TASK "XEPHANG"
    if(!fopen(TASK".INP","r")){
        return;
    }
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    freopen(TASK".INP","r",stdin);
    freopen(TASK".OUT","w",stdout);
}
#define DayCon vector<int>
// #define lap(var,begin,end) for(var=begin;var<end;var++)
int n;
vector<int> a;
vector<DayCon>F;//F[i] là dãy con lớn nhất mà phân tử cuối cùng là a[i]
vector<DayCon>::iterator max_global;
int main(){
    init();
    //đọc dữ liệu
    vector<DayCon>::iterator max_current;
    cin>>n;
    // a=new int[n+1];
    a.resize(n+1);
    F.resize(n+1);
    max_global=F.begin();
    for(int i=1;i<=n;i++){
        cin>>a[i];
        max_current=F.begin()+i;
        *max_current={};
        for(int j=1;j<i;j++){
            if(a[j]<=a[i]){
                if(F[j].size()>(*max_current).size()){
                    max_current=F.begin()+j;
                }
            }
        }
        F[i]=*max_current;
        F[i].push_back(i);
        // max_current.j=i
        if(F[i].size()>max_global->size()){
            max_global=F.begin()+i;
        }
    }
    cout<<max_global->size()<<'\n';
    for(int x:*max_global){
        cout<<x<<' ';
    }
    //
}