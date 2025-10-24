#include <bits/stdc++.h>
using namespace std;

/**
 * \brief khởi tạo đổi luồng vào ra bằng file
 */
void init(){
    std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
    #define TASK "C"
    if(fopen(TASK".INP","r")){
        freopen(TASK".INP","r",stdin);
        freopen(TASK".OUT","w",stdout);
    }
}

int m,n;
#define vto vector

vto<vto<int>> arr;
vto<vto<bool>> visited;

void BrowseRow(int i){
    //trái sang phải
    int max=arr[i][0];
    for(int j=0;j<n;j++){
        if(arr[i][j]>=max){
            visited[i][j]=true;
            max=arr[i][j];
        }
    }
    //duyệt từ phải sang
    max=arr[i][n-1];
    for(int j=n-1;j>=0;j--){
        if(visited[i][j])break;
        if(arr[i][j]>=max){
            visited[i][j]=true;
            max=arr[i][j];
        }
    }
}
void BrowseColumn(int j){
    //duyệt từ trên xuống
    int max=arr[0][j];
    for(int i=0;i<m;i++){
        if(arr[i][j]>=max){
            visited[i][j]=true;
            max=arr[i][j];
        }
    }
    //duyệt từ duwois lên
    max=arr[m-1][j];
    for(int i=m-1;i>=0;i--){
        if(arr[i][j]>=max){
            visited[i][j]=true;
            max=arr[i][j];
        }
    }
}

int main(){
    init();
    cin>>m>>n;
    visited=vto<vto<bool>>(m,vto<bool>(n,0));
    arr=vto<vto<int>>(m,vto<int>(n,0));
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<m;i++){
        BrowseRow(i);
    }
    for(int j=0;j<n;j++){
        BrowseColumn(j);
    }
    int result=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            result+=visited[i][j];
        }
    }
    cout<<result;
}