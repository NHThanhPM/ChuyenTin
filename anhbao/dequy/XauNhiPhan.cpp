#include <bits/stdc++.h>
using namespace std;

int n;
string binary;

void sinh(int vt=0){
    if(vt>=n){
        cout<<binary<<'\n';
        return;
    }
    binary[vt]='0';
    sinh(vt+1);
    if(binary[vt-1]=='1')return;
    binary[vt]='1';
    sinh(vt+1);
}

int main(){
    cin>>n;
    binary=string(n,'0');
    sinh(1);
    binary[0]='1';
    sinh(1);
    return 0;
}