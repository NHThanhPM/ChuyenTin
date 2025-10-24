#include <bits/stdc++.h>
// #include <iostream>
// #include <map>
using namespace std;

void init(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    #define TASK "CANDY"
    if(fopen(TASK".INP","r")){
        freopen(TASK".INP","r",stdin);
        freopen(TASK".OUT","w",stdout);
    }
}

/**
 * 3 5
 * 1 2 1 2 4
 * thuât toán:
 * chia mảng ra thành hai phần:
 * p1: F phần tử đầu tiên
 * p2: N-F phần tử cuỗi cúng
 * sort hai mảng
 * thay thế lần lượt phần tử nhỏ nhất của p1 bằng lớn nhất của p2
 * làm đến khi nào đủ lớn hơn T
 * nếu hết F phần tử không được thì in NO
 */

int N,F,T,*a;
int Tong=0;//tổng F phần tử đầu tiền

void read(){
    cin>>N>>F>>T;
    a=new int[N];
    for(int i=0;i<F;i++){
        cin>>a[i];
        Tong+=a[i];
    }
    for(int i=F;i<N;i++){
        cin>>a[i];
    }
}

int main(){
    init();
    read();
    sort(a,a+F);
    sort(a+F,a+N);
    int i=0;
    int j=N-1;
    while(i<F && F<=j){
        if(a[i]>=a[j])break;
        //thay thế a[i] bằng a[j]
        Tong+=a[j]-a[i];
        if(Tong>=T){
            cout<<i+1;
            return 0;
        }
        i++;
        j--;
    }
    cout<<"NO";
}