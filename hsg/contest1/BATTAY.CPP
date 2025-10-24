// #include <bits/stdc++.h>
#include <iostream>
#include <map>
using namespace std;

void init(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    #define TASK "BATTAY"
    if(fopen(TASK".INP","r")){
        freopen(TASK".INP","r",stdin);
        freopen(TASK".OUT","w",stdout);
    }
}

int N,*x,*y;
char *s;

map<int,map<char,map<int,int>>> M;
//M[y][s][x];

void read(){
    cin>>N;
    x=new int[N];
    y=new int[N];
    s=new char[N];
    for(int i=0;i<N;i++){
        cin>>x[i]>>y[i];
    }
    for(int i=0;i<N;i++){
        cin>>s[i];
    }
}

void analysis(){
    for(int i=0;i<N;i++){
        M[y[i]][s[i]][x[i]]++;
    }
}

void handle(){
    int result=0;
    for(auto x_y:M){
        int TongL=0;
        int TongR=0;
        // for(auto x_s:x_y.second){
            for(auto x_x:x_y.second['L']){
                TongL+=x_x.second;
                // TongSoluong+=x_x.second;
                result+=(x_x.second)*(x_x.second-1)/2;
            }
            for(auto x_x:x_y.second['R']){
                TongR+=x_x.second;
                // TongSoluong+=x_x.second;
                result+=((x_x.second)*(x_x.second-1)/2);
            }
        result+=TongL*TongR;
    }
    cout<<result*3;
}

int main(){
    init();
    read();
    analysis();
    delete[] x;
    delete[] y;
    delete[] s;
    handle();
}