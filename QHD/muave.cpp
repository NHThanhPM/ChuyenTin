#include <bits/stdc++.h>
using namespace std;
struct nguoi{
    int T=0;//thời gian tự mua vé
    int A=0;//thời gian mua giùm luôn vé người tiếp
    int ThoiGian=0;//thời gian cần để có vé
    bool KoTuMua=0;//nhờ người mua giùm
};
int n;//số lượng người
int main(){
    cin>>n;
    nguoi *ng=new nguoi[n+1];
    for(int i=1;i<=n;i++){
        cin>>ng[i].T;
    }
    for(int i=1;i<n;i++){
        cin>>ng[i].A;
    }
    ng[1].ThoiGian=ng[1].T;
    int Cach1=0;
    int Cach2=0;
    for(int i=2;i<=n;i++){
        Cach1=ng[i].T+ng[i-1].ThoiGian;//tự mua
        Cach2=ng[i-1].A+ng[i-2].ThoiGian;//nhờ mua giùm
        if(Cach2<Cach1){
            ng[i].ThoiGian=Cach2;
            ng[i].KoTuMua=true;
        }
        else{
            ng[i].ThoiGian=Cach1;
        }
    }
    cout<<"Thời gian để mua hết vé:";
    cout<<ng[n].ThoiGian<<'\n';
    //
    // cout<<"thời gian cần mua:\n";
    // for(int i=1;i<=n;i++){
    //     cout<<ng[i].ThoiGian<<'\t';
    // }cout<<'\n';

    // for(int i=1;i<=n;i++){
    //     cout<<ng[i].KoTuMua<<'\t';
    // }
    // cout<<'\n';
    //những người tự mua
    cout<<"Những người không cần mua:\n";
    int i=n;
    while(i>0){
        if(ng[i].KoTuMua){
            cout<<i<<'\t';
            i--;
        }
        i--;
    }
    cout<<'\n';
    delete[] ng;
}