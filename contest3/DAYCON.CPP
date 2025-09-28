#include <bits/stdc++.h>
using namespace std;
int n,m;

int main(){
    //đổi luồng nhập xuất
    freopen("DAYCON.INP","r",stdin);
    freopen("DAYCON.OUT","w",stdout);
    // nhập dữ liệu
    cin>>n>>m;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int Tong=0;
    // tính tổng m số đầu tiên
    for(int i=0;i<m;i++){
        Tong+=a[i];
    }
    int result=Tong;
    // bắt dầud duyệt
    for(int i=m;i<n;i++){
        Tong-=a[i-m];
        Tong+=a[i];
        // cout<<"i:"<<i<<"=>"<<Tong<<'\n';
        if(Tong>result)result=Tong;
    }
    cout<<result;
}