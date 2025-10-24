#include <bits/stdc++.h>
using namespace std;

/**
 * \brief khởi tạo đổi luồng vào ra bằng file
 */
void init(){
    std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
    #define TASK "SUMX"
    if(fopen(TASK".INP","r")){
        freopen(TASK".INP","r",stdin);
        freopen(TASK".OUT","w",stdout);
    }
}

int n,*a,x,result=0;
map<int,int> F;

void read(){
    cin>>n;
    a=new int[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cin>>x;
}


int main(){
    init();
    read();
    for(int i=0;i<n;i++){
        result+=F[x-a[i]];
        F[a[i]]++;
    }
    cout<<result;
}