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
    #define TASK "CNT"
    if(!fopen(TASK".INP","r")){
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

int N,S,*a;
void read(){
    cin>>N>>S;
    a=new int[N];
    for(int i=0;i<N;i++){
        cin>>a[i];
    }
}
struct DayCon{
    int i,j;
    bool operator!=(const DayCon&dc)const{
        if(j-i==dc.j-dc.i){
            for(int k=0;k<=j-i;k++){
                if(a[i+k]!=a[dc.i+k])return true;
            }
        }
        else return true;
        return false;
    }
    inline bool operator==(const DayCon&dc)const{
        return !(*this!=dc);
    }
    bool operator<(const DayCon&dc)const{
        return (j-i<dc.j-dc.i)?true:(i<dc.i)?true:false;
    }
};
set<DayCon> res;
void hd(){
    DayCon tmp={0,0};
    int Tong=0;
    for(tmp.i=0;tmp.i<N;tmp.i++){
        Tong=0;
        for(tmp.j=tmp.i;tmp.j<N;tmp.j++){
            Tong+=a[tmp.j];
            if(abs(Tong)>S){
                res.insert(tmp);
            }
        }
    }
    cout<<res.size();
}