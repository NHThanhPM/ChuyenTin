#include <bits/stdc++.h>
using namespace std;

/**
 * \brief khởi tạo đổi luồng vào ra bằng file
 */
void init(){
    std::ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    #define TASK "bai1"
    if(fopen(TASK".INP","r")){
        freopen(TASK".INP","r",stdin);
        freopen(TASK".OUT","w",stdout);
    }
}

/**
 * \brief kiểm tra tính hợp lệ của chữ cái theo đề bài
 */
inline bool check(char a){
    return '0'<=a && a<='9'&&
        a%2==0;//chữ cái mà số chia hết cho 2 thì chữ số đó cũng chẵn
}

int main(){
    init();
    char s;
    while(cin>>s){
        if(check(s)){
            cout<<s;
        }
    }
}