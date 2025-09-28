#include <bits/stdc++.h>

using namespace std;
struct Gold
{
    static const bool trai=false;
    static const bool xuong=true;
    int VangTrenO=0;
    int VangNhanDuoc=0;
    bool Dichuyen=trai;
};

int n;
vector<vector<Gold>> G;

int main(){
    cin>>n;
    G=vector<vector<Gold>>(n+1,vector<Gold>(n+1,Gold()));
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>G[i][j].VangTrenO;
        }
    }

    //kiểm tra dữ liệu
    // cout<<"mangnhapvao:\n";
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=n;j++){
    //         cout<<G[i][j].VangTrenO<<'\t';
    //     }
    //     cout<<'\n';
    // }
    // //
    int Cach1=0;
    int Cach2=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            Cach1=G[i][j].VangTrenO+G[i-1][j].VangNhanDuoc;
            Cach2=G[i][j].VangTrenO+G[i][j-1].VangNhanDuoc;
            // cout<<Cach1<<' '<<Cach2<<'\t';
            if(Cach1>Cach2){
                G[i][j].VangNhanDuoc=Cach1;
                G[i][j].Dichuyen=Gold::xuong;
            }
            else{
                G[i][j].VangNhanDuoc=Cach2;
                G[i][i].Dichuyen=Gold::trai;
            }
        }
        // cout<<'\n';
    }
    // cout<<"\ncach di:";
    cout<<G[n][n].VangNhanDuoc;
}
