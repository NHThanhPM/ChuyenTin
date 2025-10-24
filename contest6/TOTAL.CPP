#include <bits/stdc++.h>
using namespace std;

/**
 * \brief khởi tạo đổi luồng vào ra bằng file
 */
void init(){
    std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
    #define TASK "TOTAL"
    if(fopen(TASK".INP","r")){
        freopen(TASK".INP","r",stdin);
        freopen(TASK".OUT","w",stdout);
    }
}

unsigned long long N;
// int*a;
map<unsigned long long,unsigned long long> s;//first là các phần tử,second là số lượng

void read(){
    cin>>N;
    // a=new int[N];
    unsigned long long temp;
    for(int i=0;i<N;i++){
        cin>>temp;
        s[temp]++;
    }
}

int main(){
    // kdflsdjflkdsjlkdsjlkd;
    // #ifdef __linux__
    // return system("g++ --help");
    //     return 1;
    // #endif
    init();
    read();
    size_t haha;
    cout<<std::fixed<<s.size();
    // int Max_l=0;
    // for(auto x:s){
    //     Max_l=max(Max_l,x.second);
    // }
    cout<<' '<<std::fixed<<
    max_element(s.begin(),s.end(),
    [](const auto&a,const auto&b){
        return a.second<b.second;
    })->second;
}