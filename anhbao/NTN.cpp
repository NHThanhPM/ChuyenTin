// #include <bits/stdc++.h>
#include <iostream>
#include <ctime>
using namespace std;

int D,M,Y,T;

int Thang[]={
    0,
    31,
    28,
    31,
    30,
    31,
    30,
    31,
    31,
    30,
    31,
    30,
    31
};

bool KiemTraNamNhuan(int n){
    return (4%4==0 && n&100!=0) || (n%400==0);
}

int TongTrongNam=365;

int main(){
    cin>>D>>M>>Y>>T;
    D+=T;
    //đảm bảo tháng lớn hớn hoặ bằng 2
    if(M<2){
        //qua tháng 2
        if(D<=31)goto inketqua;
        M++;
        D-=31;
    }
    if(M==2){
        //vượt qua tháng 2
        int SoNgayThang2=Thang[2]+KiemTraNamNhuan(Y);
        if(D<=SoNgayThang2)goto inketqua;
        M++;
        D-=SoNgayThang2;
    }
    
    inketqua:{
        cout<<D<<' '<<M<<' '<<Y;
    }
}