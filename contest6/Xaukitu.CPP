#include <bits/stdc++.h>
using namespace std;

void init(){
    std::ios_base::sync_with_stdio(0);cin.tie(NULL);
    #define TASK "Xaukitu"
    if(fopen(TASK".INPUT","r")){
        freopen(TASK".INPUT","r",stdin);
        freopen(TASK".OUTPUT","w",stdout);
    }
}

string s;

int main(){
    init();
    getline(cin,s);
    int ktSo=0;
    string ChuCai;
    for(int i=0;i<s.size();i++){
        if('0'<=s[i] && s[i]<='9'){
            ktSo++;
        }else{
            if(s[i]!=' '){
                ChuCai.push_back(s[i]);
            }
        }
    }
    cout<<ktSo<<' '<<ChuCai.size()<<'\n';
    cout<<ChuCai<<'\n';
    for(int i=0;i<s.size() && s[i]!=' ';i++){
        cout<<s[i];
    }
}
