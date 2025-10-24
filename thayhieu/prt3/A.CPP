#include <bits/stdc++.h>
using namespace std;

/**
 * \brief khởi tạo đổi luồng vào ra bằng file
 */
void init(){
    std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
    #define TASK "A"
    if(fopen(TASK".INP","r")){
        freopen(TASK".INP","r",stdin);
        freopen(TASK".OUT","w",stdout);
    }
}

string can[10]={
    "CANH",
    "TAN",
    "NHAM",
    "QUY",
    "GIAP",
    "AT",
    "BINH",
    "DINH",
    "MAU",
    "KY"
};

string chi[12]={
    "THAN",
    "DAU",
    "TUAT",
    "HOI",
    "TI",
    "SUU",
    "DAN",
    "MAO",
    "THIN",
    "TY",
    "NGO",
    "MUI"
};

template<typename t>
t* LinearSearch(t* begin,t* end,t value){
    while(begin<end){
        if(*begin==value){
            break;
        }
        begin++;
    }
    return begin;
}

int n,k;
string s;
// bool CanChi;

int Tinh(int ChiSo1,int ChiSo2,int size){
    int kk1=ChiSo2-ChiSo1;
    int kk2=(kk1<0)?kk1+size:kk1-size;
    return (abs(kk1)<abs(kk2))?kk1:(abs(kk2)<abs(kk1))?kk2:min(kk1,kk2);
}

int main(){
    init();
    cin>>n>>s;
    string* ptr=LinearSearch(can,can+10,s);
    if(ptr<can+10){
        cout<<n+Tinh(n%10,ptr-can,10);

    }else{
        ptr=LinearSearch(chi,chi+12,s);
        cout<<n+Tinh(n%12,ptr-chi,12);
    }
}