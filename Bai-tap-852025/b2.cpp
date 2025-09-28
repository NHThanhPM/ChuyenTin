#include <bits/stdc++.h>

using namespace std;
unsigned long long GiaiThua(int n){
    unsigned long long  Ketqua=1;
    for(int i=2;i<=n;i++){
        Ketqua*=i;
    }
    return Ketqua;
}

int n;
int k;
int *KetQua;
bool* co;// kiểm tra xem số đã tồn tại trong mảng hoán vị thứ k chưa(true là chưa có ,false là đã có)
int find(int ThuTu=0){
    int i=0;
    do{
        if(co[i++])ThuTu--;
    }
    while(i<n && ThuTu>0);
    co[i-1]=false;
    return i;
}


int main(){
    cin>>n>>k;
    co=new bool[n];
    for(int i=0;i<n;i++){
        co[i]=1;
    }
    KetQua=new int[n];
    int ThuTU=0;
    int temp;//biến luwu giai thừa
    for(int i=n-1;i>=0;i--){
        temp=GiaiThua(i);
        // cout<<"k:"<<k<<'\n';
        // cout<<"temp:"<<temp<<";tinhstoan"<<ceil(float(k)/temp)<<'\n';
        int a=find(ceil(float(k)/temp));
        // cout<<"a"<<a<<'\n';
        KetQua[ThuTU++]=a;
        k-=temp*(a-1);
    }
    for(int i=0;i<n;i++){
        cout<<KetQua[i]<<' ';
    }
}