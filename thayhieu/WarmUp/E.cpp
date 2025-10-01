#include <bits/stdc++.h>
using namespace std;

/**
 * \brief khởi tạo đổi luồng vào ra bằng file
 */
void init(){
    std::ios_base::sync_with_stdio(0);cin.tie(NULL);
    #define TASK "E"
    if(fopen(TASK".INP","r")){
        freopen(TASK".INP","r",stdin);
        freopen(TASK".OUT","w",stdout);
    }
}

string cmds="G"//di chuyển lên
    "R"//di chuyển trái
    "B"//di chuyển xuống
    "L"//di chuyển phải
;

int dx[4]={0,1,0,-1};
int dy[4]={1,0,-1,0};

int main(){
    // init();
    //thử nghiệm
    // sort(cmds,cmds+4);
    // for(int i=0;i<4;i++){
    //     cout<<cmds[i]<<' ';
    // }
    // cout<<'\n';
    int n;
    cin>>n;
    int x=0,y=0,h=0;
    // int x=0;
    // int y=0;
    char cmd;//biến lưu lệnh
    for(int i=0;i<n;i++){
        cin>>cmd;
        h=(h+cmds.find(cmd))%4;
        x+=dx[h];
        y+=dy[h];
    }
    cout<<x<<' '<<y;
    // char bf='G';//lệnh trước đó
    // int vt;
    // for(int i=0;i<n;i++){
    //     cin>>cmd;
    //     //thực hiện lệnh
    //     if(cmd=='B'){
    //         vt=lower_bound(cmds,cmds+4,bf)-cmds;
    //         vt=(vt+2)%4;
    //         cmd=cmds[vt];
    //     }
    //     switch(cmd){
    //         // case 'B':
    //         //     // x++;
    //         //     // break;
    //         //     vt=lower_bound(cmds,cmds+4,bf)-cmds;
    //         //     vt=(vt+2)%4;
    //         //     cmd=cmds[vt];
    //         case 'G':
    //             // cout<<cmd<<'\n';
    //             y++;
    //             break;
    //         case 'L':
    //             // cout<<cmd<<'\n';
    //             x--;
    //             break;
    //         case 'R':
    //             // cout<<cmd<<'\n';
    //             x++;
    //             break;
    //         case 'O':
    //             // cout<<cmd<<'\n';
    //             y--;
    //             break;
    //     }
    //     bf=cmd;
    // }
    // cout<<x<<' '<<y;
    // return 0;
}