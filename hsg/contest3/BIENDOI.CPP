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
    #define TASK "BIENDOI"
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
#define MT unsigned int
MT n,k;
vector<MT> a;
MT Max=0,res=10e9;
vector<MT> dfr;
void read(){
    cin>>n>>k;
    // a=new MT[n];
    a.resize(n);
    for(MT i=0;i<n;i++){
        cin>>a[i];
        Max=max(a[i],Max);
    }
    dfr.resize(n);
}
vector<MT> snt={2,3,5,7};//các số nguyên tố
bool check(MT x){
    if(x<2)return false;
    auto end=upper_bound(snt.begin(),snt.end(),sqrt(x));
    for(auto i=snt.begin();i!=end;i++){
        if(x%*i==0)return false;
    }
    return true;
}
void LoadSNT(){
    MT i;
    for(i=11;i<Max;i++){
        if(check(i))snt.push_back(i);
    }
    while(!check(i)){
        i++;
    }
    snt.push_back(i);
}
void LoadDfr()//khởi tạo sự thay đổi để được phần tử gần nhất
{
    vector<MT>::iterator x;
    for(int i=0;i<n;i++){
        x=upper_bound(snt.begin(),snt.end(),a[i]);
        if(x==snt.begin()){
            dfr[i]=*x-a[i];
        }
        else{
            dfr[i]=min(*x-a[i],a[i]-*(--x));
        }
    }
}
void hd(){
    LoadSNT();
    LoadDfr();
    auto bg=dfr.begin();
    auto ed=dfr.begin()+k-1;
    MT ChiPhi=0;
    for(int i=0;i<k-1;i++){
        ChiPhi+=dfr[i];
    }
    while(ed<dfr.end()){
        ChiPhi+=*ed;
        res=min(res,ChiPhi);
        ChiPhi-=*bg;
        bg++;
        ed++;
    }
    cout<<res;
}