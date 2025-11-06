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
    #define TASK "BLRPATH"
    if(fopen(TASK".INP","r")){
        ios_base::sync_with_stdio(0);
        cin.tie(0);cout.tie(0);
        freopen(TASK".INP","r",stdin);
        freopen(TASK".OUT","w",stdout);
    }
}
int N,M,K;
vector<vector<int>> path;
vector<bool> BLR;
void read(){
    cin>>N>>M>>K;
    path.resize(N+1,vector<int>(2));
    path[0]={0,0};
    BLR.resize(M);
    for(int i=1;i<=N;i++){
        cin>>path[i][0]>>path[i][1];
    }
    char tmp;
    for(int i=0;i<M;i++){
        cin>>tmp;
        BLR[i]=(tmp=='R');
    }
}
int solution(){
    int loop_end,loop_start;
    vector<int> vitri(K+1);//vitri[i] là điểm của người sau khi di chuyển i lần
    vitri[0]=1;
    map<int,int> vst;//vst[i] là số bước khi đi qua điểm i
    for(int i=1;i<vitri.size();i++){
        vitri[i]=path[vitri[i-1]][BLR[0]];
        for(int j=1;j<BLR.size();j++){
            vitri[i]=path[vitri[i]][BLR[j]];
        }
        if(i==K)return vitri[K];
        if(vitri[i]==1){
            return vitri[K%i];
        }
        else if(vst[vitri[i]]){
            loop_start=vst[vitri[i]];
            loop_end=i;
        }
        else{
            vst[vitri[i]]=i;
        }
    }
    //k=6
    // 1 3 2 4 3 2 4 3 2 4 3
    int vt=(K-(loop_start-1))%(loop_end-loop_start);
    if(vt==0)return vitri[loop_end-1];
    else{
        return vitri[loop_start-1+vt];
    }
}
int main(){
    init();
    read();
    cout<<solution();
}