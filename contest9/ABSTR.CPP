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
    #define TASK "ABSTR"
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
int hd();//xu ly chinh
int main(){
    init();
    read();
    return hd();
}
int k;
// int f;//dãy nhị phân biểu thị màu(0 là y 1 là g)
void printBL(int n){
    for(int i=k-1;i>=0;i--){
        cout<<(((n>>i) & 1)?'B':'A');
    }
}
void read(){
    cin>>k;
}
bool check(int n){
    bool bf=0;
    bool pr;
    for(int i=k-1;i>=0;i--){
        pr=(n>>i) & 1;
        if(pr && bf)return false;
        bf=pr;
    }
    return true;
}
int hd(){
    int sl=pow(2,k);
    for(int i=0;i<sl;i++){
        if(check(i)){
            printBL(i);
            cout<<'\n';
        }
    }
    // cout<<sl;
    return k;
}