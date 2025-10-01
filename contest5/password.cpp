#include <bits/stdc++.h>
using namespace std;

/**
 * \brief khởi tạo đổi luồng vào ra bằng file
 */
void init(){
    // std::ios_base::sync_with_stdio(0);
    // cin.tie(NULL);
    // cout.tie(NULL);
    #define TASK "password"
    if(fopen(TASK".INP","r")){
        freopen(TASK".INP","r",stdin);
        freopen(TASK".OUT","w",stdout);
    }
}

/**
 * \brief kiểm tra ký tự là chữ hoa,chữ thường,số
 * \return chỉ số với từng loại số
 */
inline int check(char a){
    if('A'<=a && a<='Z'){
        return -1;
    }
    if('a'<=a && a<='z'){
        return 0;
    }
    if('0'<=a && a<='9'){
        return 1;
    }
    return -2;
}

int ChuHoa,ChuThuong,So;
string S;
int XuLy(){
    int result=0;
    for(int i=0;i<=S.size()-6;i++){
        ChuHoa=0;
        ChuThuong=0;
        So=0;
        int j=i;
        // duyệt cho đủ 6 kí tự
        while(j<i+5){
            switch(check(S[j])){
                case -1:
                    ChuHoa++;
                    break;
                case 0:
                    ChuThuong++;
                    break;
                case 1:
                    So++;
                    break;
            }
            j++;
        }
        //duyệt đến hết
        while(j<S.size()){
            switch(check(S[j])){
                case -1:
                    ChuHoa++;
                    break;
                case 0:
                    ChuThuong++;
                    break;
                case 1:
                    So++;
                    break;
            }
            if(ChuHoa>0 && ChuThuong>0 && So>0){
                result+=S.size()-j;
                break;
            }
            j++;
        }
    }
    return result;
}

int main(){
    init();
    int n;
    cin>>n;
    // return n;
    // string S;
    for(int i=0;i<n;i++){
        // getline(cin,S);
        cin>>S;
        S="";
        cout<<XuLy()<<'\n';
    }
}