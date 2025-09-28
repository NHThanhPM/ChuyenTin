#include <bits/stdc++.h>
using namespace std;

int main(){
    string result="0";
    int Max=0;//trọng số lón nhất
    ifstream input("TRONGSO.INP");
    ofstream output("TRONGSO.OUT",std::ios::out);
    int N;
    input>>N;
    string S;
    double TrongSo;
    int SoluongChuSo;
    for(int i=0;i<N;i++){
        input>>S;
        TrongSo=0;
        SoluongChuSo=0;
        for(int j=0;j<S.size();j++){
            if('0'<=S[j] && S[j]<='9'){
                SoluongChuSo++;
                TrongSo+=S[j]-'0';
            }
        }
        if(SoluongChuSo)TrongSo/=SoluongChuSo;
        if(TrongSo>Max){
            Max=TrongSo;
            result=S;
        }
    }
    input.close();
    output<<result;
    output.close();
}