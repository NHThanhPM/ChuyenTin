/*                        \\
                           \\
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
    #define TASK "UOCSO"
    if(!fopen(TASK".INP","r")){
        return;
    }
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    freopen(TASK".INP","r",stdin);
    freopen(TASK".OUT","w",stdout);
}
#define MT unsigned long long
MT m;
pair<MT,MT> *CoSo,TruyVan[3];
MT res[3]={0,0,0};
void CHon(MT i,MT Tong){
    if(i>=m){
        for(int j=0;j<3;j++){
            if(TruyVan[j].first<=Tong&&Tong<=TruyVan[j].second){
                res[j]++;
            }
        }
        return;
    }
    for(int j=0;j<=CoSo[i].second;j++){
        CHon(i+1,Tong);
        Tong*=CoSo[i].first;
    }
}
int main(){
    init();
    //đọc dữ liệu
    cin>>m;
    CoSo=new pair<MT,MT>[m];
    for(int i=0;i<m;i++){
        cin>>CoSo[i].first>>CoSo[i].second;
    }
    for(int i=0;i<3;i++){
        cin>>TruyVan[i].first>>TruyVan[i].second;
    }
    CHon(0,1);
    cout<<res[0]<<'\n'<<res[1]<<'\n'<<res[2];
}