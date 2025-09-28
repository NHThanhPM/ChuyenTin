#include <bits/stdc++.h>
using namespace std;

#define task "C"

struct test{
    int n,p,q,r;
    friend
    istream& operator>>(istream&in,test&a){
        in>>a.n>>a.p>>a.q>>a.r;
        return in;
    }
};

bool KiemTraChiaHet(int n,const int a[3]){
    int ChiaHt=0;
    // int KoChiaHt=0;
    for(int i=0;i<3;i++){
        if(n%a[i]==0){
            ChiaHt++;
        }
        // else{
        //     KoChiaHt++;
        // }
    }
    return ChiaHt==2;
}

void handle(test&n){
    int result=0;
    int a[3]={n.p,n.q,n.r};
    for(int i=1;i<=n.n;i++){
        if(KiemTraChiaHet(i,a))result++;
    }
    cout<<result<<'\n';
}

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    if(fopen(task".inp","r")){
        freopen(task".inp","r",stdin);
        freopen(task".out","w",stdout);
    }
    test data;

    while(cin>>data){
        handle(data);
    }
}