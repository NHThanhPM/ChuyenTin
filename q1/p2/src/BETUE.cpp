#include <bits/stdc++.h>
using namespace std;

int N,M;
int*a;

int main(){
    cin>>N>>M;
    a=new int[M];
    int Tong=0;
    for(int i=0;i<M;i++){
        cin>>a[i];
        Tong+=a[i];
    }
    int TrungBinh=Tong/N;
    // cout<<"Tong:"<<Tong;
    // cout<<"\nTrungBINH:"<<TrungBinh<<'\n';
    sort(a,a+M);
    int result=0;
    for(int i=0;i<M;i++){
        TrungBinh=Tong/N;
        // cout<<"I:"<<i<<'\n';
        // cout<<"trungbin:"<<TrungBinh<<'\n';
        int SONguoiDUocjPhat=a[i]/TrungBinh;
        // cout<<"Songuoiduocjphat:"<<SONguoiDUocjPhat<<'\n';
        result=max(result,TrungBinh+a[i]%TrungBinh);
        N-=SONguoiDUocjPhat;
        Tong-=a[i];
        // cout<<"TONG:"<<Tong<<";N:"<<N<<'\n';
    }
    // delete[] a;
    cout<<result;
}