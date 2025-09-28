#include <bits/stdc++.h>
using namespace std;

/**
 * \brief khởi tạo đổi luồng vào ra bằng file
 */
void init(){
    std::ios_base::sync_with_stdio(0);cin.tie(NULL);
    #define TASK "PERM"
    if(fopen(TASK".INP","r")){
        freopen(TASK".INP","r",stdin);
        freopen(TASK".OUT","w",stdout);
    }
}

int N;
string S;//các hoán vị(có thể in trực tiếp)
vector<bool>num;//kiểm tra xem số đã được chọn chưa(1 là được phép chọn còn 0 là có chọn rồi không đ chọn nữa)

void DeQuy(int vt=0){
    if(vt>=N){
        cout<<S<<'\n';
        return;
    }
    for(int i=1;i<=N;i++){
        if(num[i]){
            num[i]=false;
            S[vt]=i+'0';
            DeQuy(vt+1);
            num[i]=true;
        }
    }
}

int main(){
    init();
    cin>>N;
    S.resize(N);
    num=vector<bool>(N+1,1);
    DeQuy();
}