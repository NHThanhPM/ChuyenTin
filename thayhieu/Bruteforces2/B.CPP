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
    #define TASK "B"
    if(!fopen(TASK".INP","r")){
        return;
    }
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    freopen(TASK".INP","r",stdin);
    freopen(TASK".OUT","w",stdout);
}
void read();
int handle();
int main(){
    init();
    read();
    return handle();
}
vector<vector<int>> table={
    {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},
    {-1,1,1,1,1,1,1,1,1,-1},
    {-1,1,1,1,1,1,1,1,1,-1},
    {-1,1,1,1,1,1,1,1,1,-1},
    {-1,1,1,1,1,1,1,1,1,-1},
    {-1,1,1,1,1,1,1,1,1,-1},
    {-1,1,1,1,1,1,1,1,1,-1},
    {-1,1,1,1,1,1,1,1,1,-1},
    {-1,1,1,1,1,1,1,1,1,-1},
    {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1}
};
int res=0;
pair<int,int> ViTri={1,1};
int huong=2;//ngược chièu kim đồng hồ
int dx[]={0,-1,0,1};
int dy[]={-1,0,1,0};
void read(){
    int N;
    char Xk[3];
    cin>>N;
    for(int i=0;i<N;i++){
        cin>>Xk;
        // cout<<Xk<<'\n';
        table[Xk[1]-'0'][Xk[0]-'A'+1]=-1;
    }
}
int handle(){
    //kiểm tra mảng
    // cout<<"|\t";
    // for(char i='A';i<='H';i++){
    //     cout<<i<<'\t';
    // }
    // cout<<"|\t";
    // for(auto i:table){
    //     cout<<'\n';
    //     for(auto j:i){
    //         cout<<j<<'\t';
    //     }
    // }
    //di chuyển
    // if(table[1][1]==-1){
    //     cout<<"0";
    //     return 0;
    // }
    res=-1;
    while(table[ViTri.second][ViTri.first]!=0){
        // if(table[ViTri.second][ViTri.first]==-1)break;
        table[ViTri.second][ViTri.first]=0;
        res++;
        ViTri.second+=dy[huong];
        ViTri.first+=dx[huong];
        while(table[ViTri.second][ViTri.first]==-1){
            ViTri.second-=dy[huong];
            ViTri.first-=dx[huong];
            huong=(huong+1)%4;
            ViTri.second+=dy[huong];
            ViTri.first+=dx[huong];
        }
    }
    cout<<res;
    return 0;
}