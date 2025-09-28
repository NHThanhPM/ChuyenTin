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

// boo KiemTraChiaHet(int n,const int a[3]){
//     int ChiaHt=0;
//     // int KoChiaHt=0;
//     for(int i=0;i<3;i++){
//         if(n%a[i]==0){
//             ChiaHt++;
//         }
//         // else{
//         //     KoChiaHt++;
//         // }
//     }
//     return ChiaHt==2;
// }

long long BCNN(int a,int b){
    return a*b/__gcd(a,b);
}

void handle(test&n){
    long long A=n.n/BCNN(n.p,n.q);
    long long B=n.n/BCNN(n.q,n.r);
    long long C=n.n/BCNN(n.p,n.r);
    long long D=n.n/BCNN(n.p,BCNN(n.q,n.r));
    cout<<A+B+C-3*D<<'\n';
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