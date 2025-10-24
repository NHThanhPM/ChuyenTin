#include <bits/stdc++.h>
using namespace std;

/**
 * tóm tắt yêu cầu: tìm đoạn con có tổng lớn/nhỏ nhất
 */

/**
 * \brief kiểm tra file có tồn tại không và đổi luồng r/w sang file
 */
void init(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    #define TASK "FLOWER"
    if(fopen(TASK".INP","r")){
        freopen(TASK".INP","r",stdin);
        freopen(TASK".OUT","w",stdout);
    }
}

int N,X,*a,max_sm=-10e6,min_sm=10e6,Tong,min_u,min_v;

void read(){
    cin>>N>>X;
    a=new int[N];
    for(int i=0;i<N;i++){
        cin>>a[i];
    }
}

void idk(){
    Tong=a[0];
    int max_cr=a[0];
    int temp_u=0,temp_v=0;
    int min_cr=a[0];
    for(int i=1;i<N;i++){
        Tong+=a[i];
        max_cr=max(max_cr+a[i],a[i]);
        max_sm=max(max_cr,max_sm);
        if(min_cr+a[i]<a[i]){
            min_cr=min_cr+a[i];
            temp_v=i;
        }
        else{
            min_cr=a[i];
            temp_u=i;
            temp_v=i;
        }
        // min_cr=min(min_cr+a[i],a[i]);
        if(min_cr<min_sm){
            min_sm=min_cr;
            min_u=temp_u;
            min_v=temp_v;
        }
    }
}

int main(){
    init();
    read();
    idk();
    int up1=max_sm*(X-1);
    int up2=min_sm*(X-1);
    // cout<<up1<<' '<<up2<<'\n';
    if(up1<=0 && up2<=0){
        cout<<0;
        return 0;
    }
    up1+=max_sm;
    up2+=min_sm;
    if(up1>up2){
        cout<<up1;
    }else{
        for(int i=min_u;i<=min_v;i++){
            a[i]*=X;
        }
        int max_cr=a[0];
        int max_sm=a[0];
        for(int i=1;i<N;i++){
            max_cr=max(max_cr+a[i],a[i]);
            max_sm=max(max_cr,max_sm);
        }
        cout<<max_sm;
    }
}