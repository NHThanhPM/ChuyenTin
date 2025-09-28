#include <bits/stdc++.h>
using namespace std;

string TongChuSo(const string&number){
    int Tong=0;
    for(int i=0;i<number.size();i++){
        Tong+=number[i]-'0';
    }
    return to_string(Tong);
}

int main(){
    int K;
    char M;
    ifstream input("LN.INP");
    ofstream output("LN.OUT",std::ios::out);
    input>>K>>M;
    string num;
    int result=0;
    for(int i=0;i<K;i++){
        input>>num;
        while(num.size()!=1){
            num=TongChuSo(num);
        }
        output<<(num[0]==M)<<'\n';
    }
    input.close();
    output.close();
}