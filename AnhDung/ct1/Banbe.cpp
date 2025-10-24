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
    #define TASK "Banbe"
    if(!fopen(TASK".INP","r")){
        return;
    }
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    freopen(TASK".INP","r",stdin);
    freopen(TASK".OUT","w",stdout);
}
map<int,int> ThuaSoNguyenTo;
int SoBanBe(int a){
    int so=a;
    //phân tích thừ số nguyên tố
    ThuaSoNguyenTo.clear();
    //first là cơ số
    //second là số mũ
    int i=2;
    while(a!=1){
        if(a%i==0){
            a/=i;
            ThuaSoNguyenTo[i]++;
        }
        else{
            i++;
        }
    }
    int res=1;
    for(auto x:ThuaSoNguyenTo){
        res*=(pow(x.first,x.second+1)-1)/(x.first-1);
    }
    return res-so;
}
int main(){
    int n,m;
    cin>>n>>m;
    // cout<<SoBanBe(220)<<'\n';
    cout<<(n==SoBanBe(m) && m==SoBanBe(n));
}