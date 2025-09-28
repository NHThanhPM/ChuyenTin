#include <bits/stdc++.h>
using namespace std;
int R,C;
vector<vector<char>> table;
int SoKhom=0;
int CC[100];

void deuqy(int i,int j){
    if(i>R || j>C || i<1 || j<1){
        return;
    }
    if(table[i][j]=='#'){
        CC[SoKhom]++;
        table[i][j]='.';
        for(int a=-1;a<=1;a++){
            deuqy(i+a,j);
        }
        for(int b=-1;b<=1;b++){
            deuqy(i,j+b);
        }
        
    }
}

int main(){
    cin>>R>>C;
    table=vector<vector<char>>(R+1,vector<char>(C+1,'.'));
    for(int i=1;i<=R;i++){
        for(int j=1;j<=C;j++){
            cin>>table[i][j];
        }
    }
    for(int i=1;i<=R;i++){
        for(int j=1;j<=C;j++){
            if(table[i][j]=='#'){
                CC[SoKhom]=0;
                deuqy(i,j);
                SoKhom++;
            }
        }
    }
    cout<<"SoLuongKhom:"<<SoKhom;
    cout<<"\nSOLuongCAKHom:";
    for(int i=0;i<SoKhom;i++){
        cout<<CC[i]<<' ';
    }
}