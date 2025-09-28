// #include <iostream>
// #include <ios
#include <bits/stdc++.h>
using namespace std;
void move(char a,char b,char c,int dia){
    //di chuyển dia từ a sang c
    if(dia==0)return;
    move(a,c,b,dia-1);
    // cout<<dia<<":";
    cout<<a<<"->"<<c<<'\n';
    move(b,a,c,dia-1);
}

int main(){
    int n;
    cin>>n;
    move('A','B','C',n);
}