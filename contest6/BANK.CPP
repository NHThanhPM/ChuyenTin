#include <iostream>
#include <algorithm>

using namespace std;

/**
 * \brief khởi tạo đổi luồng vào ra bằng file
 */
void init(){
    std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
    #define TASK "BANk"
    if(fopen(TASK".INP","r")){
        freopen(TASK".INP","r",stdin);
        freopen(TASK".OUT","w",stdout);
    }
}
int n,time_max=0;
int result=0;
struct ng{
    int a=0,t;
    inline operator int(){
        return a;
    }
};

ng*s;
bool * time_arr;//đánh dấu khaongr thời gian đã có nguwoif gửi
void read(){
    cin>>n;
    s=new ng[n];
    for(int i=0;i<n;i++){
        cin>>s[i].a>>s[i].t;
        time_max=max(time_max,s[i].t);
    }
    sort(s,s+n);
}

void tim(int i){
    for(int j=s[i].t;j>=0;j--){
        if(time_arr[j]){
            result+=s[i].a;
            time_arr[j]=false;
            return;
        }
    }
};

int main(){
    init();
    read();
    // for(int i=0;i<n;i++){
    //     cout<<s[i].a<<' '<<s[i].t<<'\n';
    // }
    time_arr=new bool[time_max+1];
    for(int i=0;i<=time_max;i++){
        time_arr[i]=true;
    }
    for(int i=n-1;i>=0;i--){
        tim(i);
    }
    cout<<result;
}