#include <bits/stdc++.h>
using namespace std;

#define task "B"

int n,a[100];

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    if(fopen(task".inp","r")){
        freopen(task".inp","r",stdin);
        freopen(task".out","w",stdout);
    }
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int bg=0;// chỉ số đến phần tử bằng phần tử đầu tiên
    bool check=true;
    while(check){
        lamlai:{};
        bg+=1;
        while(n%bg!=0 && a[bg]!=a[0] && bg <n)bg++;
        // cout<<bg<<'\n';
        int vitri=bg;
        while(vitri<n){
            for(int i=0;i<bg;i++){
                if(a[i]!=a[vitri+i]){
                    goto lamlai;
                }
            }
            vitri+=bg;
        }
        check=false;
    }
    cout<<bg;
}