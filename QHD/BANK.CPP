#include <bits/stdc++.h>
using namespace std;

class KhachHang{
public:
    int Sotien=0;
    int ThoiGian=0; 
    friend bool operator<(KhachHang&a,KhachHang&b){
        return a.Sotien<b.Sotien;
    }
};

int n;
KhachHang*kh;

int main(){
    freopen("Bank.inp","r",stdin);
    freopen("Bank.out","w",stdout);
    cin>>n;
    kh=new KhachHang[n];
    for(int i=0;i<n;i++){
        cin>>kh[i].Sotien>>kh[i].ThoiGian;
    }
    sort(kh,kh+n);
    //in ra log đã xắp xếp ra file
    fstream log("Bank.log",ios::out);
    for(int i=0;i<n;i++){
        log<<kh[i].Sotien<<' '<<kh[i].ThoiGian<<'\n';
    }
    vector<int> F(kh[n-1].ThoiGian+1,0);
    //F[i] là số tiền có thể gửi khi đến phút thứ i
    for(int i=n-1;i>=0;i++){
        int vitri=kh[i].ThoiGian;
        while(F[vitri]!=0){
            vitri--;
            if(vitri<0)break;
        }
        if(vitri<0)continue;
        else{
            F[vitri]=kh[i].Sotien;
        }
    }
    int Tong=0;
    for(int i=0;i<F.size();i++){
        Tong+=F[i];
    }
    cout<<Tong;
}