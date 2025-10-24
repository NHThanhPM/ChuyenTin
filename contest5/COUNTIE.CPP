#include <bits/stdc++.h>
using namespace std;

/**
 * \brief khởi tạo đổi luồng vào ra bằng file
 */
void init(){
    std::ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    #define TASK "COUNTIE"
    if(fopen(TASK".INP","r")){
        freopen(TASK".INP","r",stdin);
        freopen(TASK".OUT","w",stdout);
    }
}

int S=0;
vector<int> vt;//vị trí các số chẵn

int main(){
    init();
    char temp;
    while(cin>>temp){
        S++;
        if(temp%2==0){
            vt.push_back(S);
        }
    }
    // return S;
    //in lần đầu tiên
    cout<<vt.size();
    for(int i=1;i<vt[0];i++){
        cout<<' '<<vt.size();
    }
    int sl=vt.size();;
    int pos=vt[0]+1;
    for(int i=1;i<vt.size();i++){
        sl--;
        while(pos<=vt[i]){
            cout<<' '<<sl;
            pos++;
        }
    }
    while(pos<=S){
        cout<<' '<<0;
        pos++;
    }
}