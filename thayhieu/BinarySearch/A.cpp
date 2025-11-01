/*                        \\
                           \\
__________ __      __      __      ___     __ __      __
    ||     ||      ||     //\\     ||\\    || ||      ||
    ||     ||      ||    //  \\    || \\   || ||      ||
    ||     ||======||   //====\\   ||  \\  || ||======||
    ||     ||      ||  //      \\  ||   \\ || ||      ||
    ||     ||      || //        \\ ||    \\|| ||      ||
*/
#include <bits/stdc++.h>
using namespace std;
int* binary_search(int*begin,int*end,int value){
    int*mid=begin+(end-begin)/2,*left=begin,*right=end;
    while(left<right){
        if(*mid==value){
            return mid;
        }else if(value<*mid){
            if(mid==begin){
                return mid;
            }else if(*(mid-1)<value){
                return mid;
            }
            else{
                right=mid-1;
            }
        }
        else{///*mid<value
            if(mid==end-1){
                return mid;
            }
            else if(value<*(mid+1)){
                return mid+1;
            }
            else{
                left=mid+1;
            }
        }
        mid=left+(right-left)/2;
    }
    return  mid;
}
int n,m,*a,*vt;
bool*res;
struct hehe{
    int value;int vt;
}*x;
int main(){
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    //đọc dữ liệu
    cin>>n>>m;
    a=new int[n];
    x=new hehe[m];
    res=new bool[m];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<m;i++){
        cin>>x[i].value;
        x[i].vt=i;
    }
    //sắp xếp
    sort(a,a+n);
    sort(x,x+m,[](hehe a,hehe b){
        return a.value<b.value;
    });
    //
    vt=a;
    for(int i=0;i<m;i++){
        vt=binary_search(vt,a+n,x[i].value);
        res[x[i].vt]=(*vt==x[i].value);
    }
    //in ra kết quả
    for(int i=0;i<m;i++){
        cout<<res[i]<<'\n';
    }
    //
}