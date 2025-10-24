#include <bits/stdc++.h>
using namespace std;

void init(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    #define TASK "HAIUOC"
    if(fopen(TASK".INP","r")){
        freopen(TASK".INP","r",stdin);
        freopen(TASK".OUT","w",stdout);
    }
}

int N,*A,A_max=1;
vector<bool> snt;//mảng để sàng số nguyên tố


void read(){
    cin>>N;
    A=new int[N];
    for(int i=0;i<N;i++){
        cin>>A[i];
        A_max=max(A[i],A_max);
    }
}

void sieve(){
    int sqrt_s=sqrt(snt.size());
    for(int i=2;i<=sqrt_s;i++){
        if(snt[i]){
            for(int j=i*i;j<snt.size();j+=i){
                snt[j]=0;
            }
        }
    }
}

int main(){
    init();
    read();
    snt=vector<bool>(A_max+1,true);
    sieve();
    for(int i=0;i<N;i++){
        while(!snt[A[i]])A[i]--;
        cout<<A[i]<<' ';
    }
}