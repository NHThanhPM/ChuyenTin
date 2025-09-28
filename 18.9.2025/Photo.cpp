#include <bits/stdc++.h>
using namespace std;

int k,n,a,b,*si;

bool lonhon(int a,int b){
    return a>b;
}

signed main(){
    freopen("Photo.inp","r",stdin);
    freopen("Photo.out","w",stdout);
    cin>>k>>n>>a>>b;
    // cout<<((1+9==10) or (1+0==0))<<"\n";
    si=new int[n];
    int x,y;
    for(int i=0;i<n;i++){
        cin>>x>>y;
        si[i]=a*x+b*y;
    }
    // //
    // cout<<"dung luong moi nguowi can:";
    // for(int i=0;i<n;i++){
    //     cout<<si[i]<<' ';
    // }
    // cout<<'\n';
    // //
    sort(si,si+n);
    // sort(si,si+n,lonhon);
    // //
    // cout<<"dung luong moi nguowi can:";
    // for(int i=0;i<n;i++){
    //     cout<<si[i]<<' ';
    // }
    // cout<<'\n';
    //
    int TongDungLuongHienTai=0;
    int SoNguoi=0;
    for(SoNguoi=0;SoNguoi<n;SoNguoi++){
        TongDungLuongHienTai+=si[SoNguoi];
        if(TongDungLuongHienTai>k){
            // SoNguoi--;
            break;
        }
    }
    cout<<SoNguoi;
}