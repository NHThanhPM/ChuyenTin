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
    #define TASK "CVA"
    if(!fopen(TASK".INP","r")){
        return;
    }
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    freopen(TASK".INP","r",stdin);
    freopen(TASK".OUT","w",stdout);
}
#define MT unsigned long long
int main(){
    init();
    char lt;//ký tự để đọc từ từ
    MT*res=new MT[3]{0,0,0};
    while(cin>>lt){
        if(lt=='C'){
            res[0]++;
        }else if(lt=='V'){
            res[1]+=res[0];
        }
        else if(lt=='A'){
            res[2]+=res[1];
        }
    }
    cout<<res[2];
}

//tổng quát của thuật toán
/*
int CachChon(const string a,const string b)//số cách chọn b trong a
{
    vector<int>res(b.size(),0);
    //res[i] là só cách chọn b.substr(0,i) trong a
    for(int x:a){
        if(x==b[0]){
            res[0]++;
        }
        for(int i=1;i<b.size();i++){
            if(x==b[i]){
                res[i]+=res[i-1];
            }
        }
    }
    return *(res.end()-1);
}
*/