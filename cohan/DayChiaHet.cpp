#include <bits/stdc++.h>
using namespace std;

/**
 * \brief khởi tạo đổi luồng vào ra bằng file
 */
void init(){
    std::ios_base::sync_with_stdio(0);cin.tie(NULL);
    #define TASK ""
    if(fopen(TASK".INP","r")){
        freopen(TASK".INP","r",stdin);
        freopen(TASK".OUT","w",stdout);
    }
}

int N;
int *A;

int main(){
    init();
    cin>>N;
    A=new int[N+1];
    A[0]=0;
    A[1]=1;
    int num=2;//num số chia hết cho num
    int vt=2;
    int So=1;
    // cout<<A[1];
    while(vt<=N){
        So=A[vt-1]/num +1;
        // cout<<So<<' '<<"num:"<<num<<'\n';
        for(int i=0;i<num && vt<=N;i++){
            A[vt]=So*num;
            // cout<<' '<<A[vt];
            So++;
            vt++;
        }
        num++;
    }
    cout<<'\n';
    cout<<A[N];
    delete[] A;
}