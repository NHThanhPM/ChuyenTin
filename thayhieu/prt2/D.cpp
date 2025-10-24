#include <bits/stdc++.h>
using namespace std;

/**
 * \brief khởi tạo đổi luồng vào ra bằng file
 */
void init(){
    std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
    #define TASK "D"
    if(fopen(TASK".INP","r")){
        freopen(TASK".INP","r",stdin);
        freopen(TASK".OUT","w",stdout);
    }
}

int M,N;
#define vto vector
vto<vto<int>> arr;

int main(){
    cin>>M>>N;
    arr=vto<vto<int>>(M,vto<int>(N,0));
    for(int i=0;i<M;i++){
        for(int j=0;j<N;j++){
            cin>>arr[i][j];
        }
    }
}