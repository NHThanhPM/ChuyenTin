#include <bits/stdc++.h>
using namespace std;
template<typename a,typename b>
void assign(a begin,a end,b value){
    for(;begin!=end;begin++){
        *begin=value;
    }
}
int main(){
    int a[100];
    for(int i=0;i<100;i++){
        cout<<a[i]<<' ';
    }
    assign(a,a+100,1);
    for(int i=0;i<100;i++){
        cout<<a[i]<<' ';
    }
}