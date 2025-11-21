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
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    #define TASK "B"
    if(!fopen(TASK".INP","r")){
        return;
    }
    freopen(TASK".INP","r",stdin);
    freopen(TASK".OUT","w",stdout);
}
int N,K;
map<int,int> Sodu;
int Tim(int x){
    int res=0;
    map<int,int>::iterator it=Sodu.begin();
    for(;it->first<x;it++){
        res+=(x-it->first)*it->second;
    }
    x+=K;
    for(it++;it!=Sodu.end();it++){
        res+=(x-it->first)*it->second;
    }
    return res;
}
int main(){
    init();
    cin>>N>>K;
    // Sodu.resize(K,0);
    int tmp;
    Sodu[K-1]=0;
    Sodu[K]=0;
    for(int i=0;i<N;i++){
        cin>>tmp;
        Sodu[tmp%K]++;
    }
    pair<int,int> res={0,Tim(0)};
    // int tmp;
    for(int i=1;i<K;i++){
        tmp=Tim(i);
        if(tmp<res.second){
            res.first=i;
            res.second=tmp;
        }
    }
    cout<<res.first;
    //con
}