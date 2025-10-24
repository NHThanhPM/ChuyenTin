/*                        \\
                           \\
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
    #define TASK "Banab"
    if(!fopen(TASK".INP","r")){
        return;
    }
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    freopen(TASK".INP","r",stdin);
    freopen(TASK".OUT","w",stdout);
}
void read();
int handle();
int main(){
    init();
    read();
    return handle();
}
int n,k;
string HoaQua[]={"TAO","CAM","XOAI","MIT","NHAN","VAI","QUYT","BUOI","CHUOI","NHO"};
// vector<bool> vst;//kiểm tra các vị trí đã đi qua chưa(chưa là true rồi là false)
vector<int> outpt;//vị trí của hoa quả
// set<string> res;//các string để in ra
string temp;
void read(){
    cin>>n>>k;
    sort(HoaQua,HoaQua+n);
    outpt.resize(k+1);
    outpt[0]=-1;
    // vst=vector<bool>(n,true);
}
void Chon(int i){
    if(i>k){
        for(int i=1;i<=k;i++){
            cout<<HoaQua[outpt[i]]<<' ';
        }
        cout<<'\n';
        return;
    }
    for(int j=outpt[i-1]+1;j<n;j++){
        outpt[i]=j;
        Chon(i+1);
    }
}
int handle(){
    Chon(1);
    return 0;
    // __builtin_popcount(n);
}