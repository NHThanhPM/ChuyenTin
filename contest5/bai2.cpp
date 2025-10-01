#include <bits/stdc++.h>
using namespace std;

/**
 * \brief khởi tạo đổi luồng vào ra bằng file
 */
void init(){
    std::ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    #define TASK "bai2"
    if(fopen(TASK".INP","r")){
        freopen(TASK".INP","r",stdin);
        freopen(TASK".OUT","w",stdout);
    }
}

int main(){
    init();
    string Tu;//từ được đọc vào
    // getline(cin,Tu);
    // return 1;
    // return Tu.size();
    // stringstream inp(Tu);
    string result;//từ dài nhất
    while(cin>>Tu){
        if(Tu.size()> result.size()){
            result=Tu;
        }
    }
    cout<<result;
}