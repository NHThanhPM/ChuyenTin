#include <bits/stdc++.h>
using namespace std;

int main(){
    int K,N;
    cin>>K>>N;
    int*BacThang=new int[N];//số cách nhảy đạt được khi đi qua mỗi bước
    //khởi tạo từ BacThang[0]->BacThang[K];
    BacThang[0]=1;
    for(int i=1;i<min(K,N);i++){
        BacThang[i]=BacThang[i-1]*2;
    }
    if(N-1>=K){
        // if(K>2)
        BacThang[K]=(BacThang[K-1])*2-1;
        // else
        // BacThang[K]=BacThang[K-1]*2-1;
    }
    // chạy lặp để tính tất cả
    for(int i=K+1;i<N;i++){
        //1 2 4 7 14 26 48
        BacThang[i]=BacThang[i-1]*2-BacThang[i-K-1];
    }
    cout<<BacThang[N-1];
    // cout<<"\nCác cách:";
    // for(int i=0;i<N;i++){
    //     cout<<BacThang[i]<<' ';
    // }
    //1 0 1 1 1 2 2 3 4
}