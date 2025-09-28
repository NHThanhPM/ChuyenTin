#include <bits/stdc++.h>
using namespace std;
int n;
string str;

void dequuy(int i){
    if(i>=n){
        cout<<str<<'\n';
        return;
    }
    str[i]='A';
    dequuy(i+1);
    if(str[i-1]!='B'){
        str[i]='B';
        dequuy(i+1);
    }
}

int main(){
    cin>>n;
    str=string(n,'A');
    dequuy(1);
    str[0]='B';
    dequuy(1);
}