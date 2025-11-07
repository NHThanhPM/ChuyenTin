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
    #define TASK "TAMGIAC"
    if(!fopen(TASK".INP","r")){
        return;
    }
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    freopen(TASK".INP","r",stdin);
    freopen(TASK".OUT","w",stdout);
}
int T;
int Goc[3];
int main(){
    init();
    cin>>T;int Tong;
    int Nhonvt;
    for(int i=0;i<T;i++){
        Tong=0;
        Nhonvt=1;
        for(int j=0;j<3;j++){
            cin>>Goc[i];
            if(Goc[i]==90)Nhonvt=0;
            else if(Goc[i]>90){
                Nhonvt=-1;
            }
            Tong+=Goc[i];
        }
        if(Tong!=180){
            cout<<"0";
        }
        else if(Nhonvt==1){
            cout<<"NHON";
        }else if(Nhonvt==0){
            cout<<"VUONG";
        }
        else{
            cout<<"TU";
        }
        cout<<'\n';
    }
}