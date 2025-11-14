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
    #define TASK "line"
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    if(!fopen(TASK".inp","r")){
        return;
    }
    freopen(TASK".inp","r",stdin);
    freopen(TASK".out","w",stdout);
}
int n,m;
struct segment{
    int start,end;
    friend inline bool operator<(const segment&a,const segment&b){
        return a.start<b.start ||(a.start==b.start && a.end<b.end);
    };
};
int res=0;
vector<segment> sms;
vector<int> p;
int main(){
    //đọc và xử lỹ dữ liệu
    init();
    cin>>n>>m;
    sms.resize(n);
    p.resize(m);
    for(int i=0;i<n;i++){
        cin>>sms[i].start>>sms[i].end;
    }
    sort(sms.begin(),sms.end());
    for(int i=0;i<m;i++){
        cin>>p[i];
    }
    sort(p.begin(),p.end());
    //chạy thuật toán
    auto left=p.begin();
    auto right=p.begin();
    for(int i=0;i<n;i++){
        left=lower_bound(left,p.end(),sms[i].start);
        right=upper_bound(right,p.end(),sms[i].end);
        res+=(right-left)>=2;
    }
    cout<<res;
}