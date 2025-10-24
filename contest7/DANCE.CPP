/*
========== ||       ||      //\\     ||\\    || ||      ||
   ||      ||       ||     //  \\    || \\   || ||      ||
   ||      ||=======||    //====\\   ||  \\  || ||======||
   ||      ||       ||   //      \\  ||   \\ || ||      ||
   ||      ||       ||  //        \\ ||    \\|| ||      ||
*/
#include <bits/stdc++.h>
using namespace std;
/**
 * \brief khởi tạo đổi luồng vào ra bằng file
 */
void init(){
    std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
    #define TASK "DANCE"
    if(fopen(TASK".INP","r")){
        freopen(TASK".INP","r",stdin);
        freopen(TASK".OUT","w",stdout);
    }
}
void read();
void handle();
signed main(){
    init();
    read();
    handle();
}
int n,result=0;
bool *s;
struct SoLuong{
    int bit0;
    int bit1;
};
vector<SoLuong> f;
void read(){
    cin>>n;
    f.resize(n+1);
    f[0]={0,0};
    s=new bool[n+1];
    char temp;
    for(int i=1;i<=n;i++){
        cin>>temp;
        s[i]=temp-'0';
        f[i]=f[i-1];
        if(s[i])f[i].bit1++;
        else f[i].bit0++;
        // cout<<f[i].bit0<<' '<<f[i].bit1<<'\n';
    }

}
void handle(){
    for(int i=1;i<=n;i++){
        for(int j=i+1;j<=n;j++){
            if(f[j].bit0==f[j].bit1)result++;
            if(s[i])f[j].bit1--;
            else f[j].bit0--;
        }
    }
    cout<<result;
}