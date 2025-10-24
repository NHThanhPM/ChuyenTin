#include <bits/stdc++.h>
using namespace std;

/**
 * \brief khởi tạo đổi luồng vào ra bằng file
 */
void init(){
    std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
    #define TASK "E"
    if(fopen(TASK".INP","r")){
        freopen(TASK".INP","r",stdin);
        freopen(TASK".OUT","w",stdout);
    }
}

struct rect{
    int x,y;
    void in(){
        cout<<x<<' '<<y<<'\n';
    }
    bool operator==(const rect&b){
        return x==b.x && y==b.y;
    }

    bool operator<(const rect&b){
        if(x<b.x){
            return true;
        }
        else if(x==b.x && y<b.y)return true;
        return false;
    }

    void sort(){
        // cout<<x<<' '<<y<<'\n';
        if(x>y){
            x^=y;
            y^=x;
            x^=y;   
        }
        // cout<<x<<' '<<y<<'\n';
    }
};

rect hcn[6];

signed main(){
    init();
    // rect temp;
    // temp.x=10;
    // temp.y=1;
    // temp.sort();
    for(int i=0;i<6;i++){
        cin>>hcn[i].x>>hcn[i].y;
        hcn[i].sort();
    }
    // cout<<"sapxep\n";
    sort(hcn,hcn+6);
    // for(int i=0;i<6;i++){
    //     hcn[i].in();
    // }
    //kiểm tra phải có ba cặp hcn giống nhau
    for(int i=0;i<6;i+=2){
        if(!(hcn[i]==hcn[i+1])){
            cout<<"NO";
            return 0;
        }
        else{
            hcn[i/2]=hcn[i];
        }
    }
    string result="NO";
    if(hcn[0].x==hcn[1].x){
        if(hcn[1].y==hcn[2].y && hcn[0].y == hcn[2].x){
            result="YES";
        }
    }
    else if(hcn[0].y==hcn[1].y){
        if(hcn[1].x==hcn[2].x && hcn[0].x==hcn[2].y){
            result="YES";
        }
    }
    cout<<result;
    //
    // cout<<"hoojo\n";
    // for(int i=0;i<3;i++){
    //     hcn[i].in();
    // }
    //so sánh ba cặp cạnh bằng nhau
    // int vt;
    // rect cap2;
    // cap2.x=hcn[0].y;
    // for(vt=1;vt<3;vt++){
    //     if(hcn[0].x==hcn[vt].x){
    //         // vt.y=0;
    //         cap2.y=hcn[vt].y;
    //         goto thanhcon;
    //     }
    //     if(hcn[0].x==hcn[vt].y){
    //         // vt.y=1;
    //         cap2.y=hcn[vt].x;
    //         goto thanhcon;
    //     }
    // }
    // cout<<"NO";
    // return 0;
    // thanhcon:{};
    // cap2.sort();
    // if(cap2==hcn[1+(vt==1)]){
    //     cout<<"YES";
    // }else{
    //     cout<<"NO";
    // }

}