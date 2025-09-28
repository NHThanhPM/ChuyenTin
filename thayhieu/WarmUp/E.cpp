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

char cmds[4]={'G'//di chuyển lên
    ,'L'//di chuyển trái
    ,'O'//di chuyển xuống
    ,'R'//di chuyển phải
};
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
    int x=0;
    int y=0;
    char cmd;//biến lưu lệnh
    char bf='G';//lệnh trước đó
    int vt;
    for(int i=0;i<n;i++){
        cin>>cmd;
        //thực hiện lệnh
        if(cmd=='B'){
            vt=lower_bound(cmds,cmds+4,bf)-cmds;
            vt=(vt+2)%4;
            cmd=cmds[vt];
        }
        switch(cmd){
            // case 'B':
            //     // x++;
            //     // break;
            //     vt=lower_bound(cmds,cmds+4,bf)-cmds;
            //     vt=(vt+2)%4;
            //     cmd=cmds[vt];
            case 'G':
                // cout<<cmd<<'\n';
                x++;
                break;
            case 'L':
                // cout<<cmd<<'\n';
                y--;
                break;
            case 'R':
                // cout<<cmd<<'\n';
                y++;
                break;
            case 'O':
                // cout<<cmd<<'\n';
                x--;
                break;
        }
        bf=cmd;
    }
    cout<<x<<' '<<y;
    return 0;
}