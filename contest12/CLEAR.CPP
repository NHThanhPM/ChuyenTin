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
    #define TASK "CLEAR"
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
#define MT unsigned long long
MT t,*k;
void read(){
    cin>>t;
    k=new MT[t];
    for(MT i=0;i<t;i++){
        cin>>k[i];
    }
}
bool check(int a){
    MT res=0;
    while(a>=10){
        res=0;
        while(a){
            res+=pow(a%10,2);
            a/=10;
        }
        a=res;
        // cout<<a<<'\n';
    }
    return a==1;
}
MT ChiaHet=0;
MT SoRoRang=0;
vector<MT> res={0};
MT TimSo(MT a){
    MT CoSo;
    while(true){
        // cout<<"conac\n";
        ChiaHet++;
        CoSo=floor(SoRoRang*1.0/ChiaHet)+1;
        // cout<<"chiahet:"<<ChiaHet<<"CoSO:"<<CoSo<<"\n{";
        for(MT i=0;i<ChiaHet;i++){
            SoRoRang=ChiaHet*CoSo;
            if(check(SoRoRang)){
                // cout<<SoRoRang;
                res.push_back(SoRoRang);
            }
            // cout<<SoRoRang<<',';
            CoSo++;
        }
        // cout<<"}\n";
        if(res.size()>a)break;
    }
    return res[a];
    return 0;
}
void hd(){
    for(MT i=0;i<t;i++){
        MT tmp=TimSo(k[i]);
        // cout<<"ketqua:";
        cout<<tmp<<'\n';
    }
}