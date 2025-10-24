/*
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
    #define TASK "BELCHER"
    if(!fopen(TASK".INP","r")){
        cout<<"Nhap Tu Ban Phim:"<<endl;
        return;
    }
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    freopen(TASK".INP","r",stdin);
    freopen(TASK".OUT","w",stdout);
}
void read();
void hd();//xu ly chinh
int main(){
    init();
    read();
    hd();
}
int k;
// int f;//dãy nhị phân biểu thị màu(0 là y 1 là g)
void printBL(int n){
    for(int i=k-1;i>=0;i--){
        cout<<(((n>>i) & 1)?'g':'y');
    }
}
void read(){
    cin>>k;
}
void hd(){
    int sl=pow(2,k);
    for(int i=0;i<sl;i++){
        printBL(i);
        cout<<'\n';
    }
    cout<<sl;
}