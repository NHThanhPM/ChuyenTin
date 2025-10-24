/*
                        ooOoo
                       o8888888o
                       88" . "88
                       (| -_- |)
                       O\  =  /O
                    ___/`---'\___
                  .'  \\|     |//  `.
                 /  \\|||  :  |||//  \
                /  ||||| -:- |||||  \
                |   | \\\  -  /'| |   |
                | \_|  `\`---'//  |_/ |
                \  .-\__ `-. -'__/-.  /
              ___. .'  /--.--\  . .'___
           ."" '<  `.___\_<|>_/___.' _> \"".
          | | :  - \. ;`. _/; .'/ /  .' ; |
          \  \ -.   \_\_. _.'_/_/  -' _.' /
            -.___`-.__\ \___  /__.-'.'.-'
                        `=--=-'    
        _  _   _   _      _  _  //\  _   _ 
         / _ \| | | | / \    |  \/  ||/_\|| \ | |
        | | | | | | |/ _ \   | |\/| |/ _ \|  \| |
        | |_| | |_| / _ \  | |  | | |_| | |\  |
         \__\_\\___/_/   \_\ |_|  |_|\___/|_| \_|
*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll n,m;

ll sodu(ll a,ll b,ll c)//tìm a*b%c
{
    ll result=0;

    while(b){
        if(b & 1){
            result+=a;
            result%=c;
        }
        a<<=1;
        b>>=1;
    }
    return result;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("SEQ.INP","r",stdin);
    freopen("SEQ.OUT","w",stdout);
    cin>>n>>m;
    ll an_2=1%m;
    ll an_1=6%m;
    ll a_n=an_1;
    ll s6=6%m;
    ll s9=9%m;
    for(int i=2;i<=n;i++){
        a_n=(s6*an_1)%m-(s9*an_2)%m;
        a_n%=m;
        an_2=an_1;
        an_1=a_n;
    }
    if(a_n<0){
        a_n+=m;
    }
    // a_n%=m;
    cout<<a_n;
}