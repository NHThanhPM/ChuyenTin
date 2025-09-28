#include <bits/stdc++.h>
using namespace std;

int n;
vector<int>a,F,p;

int main(){
    cin>>n;
    a=vector<int>(n,0);//dãy để nhập dữ liệu
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    F=vector<int>(n,1);//các lượng dãy con tăng đến đó
    p=vector<int>(n,0);//các vị trí trước đó của từng phần tử
    int Max=0;//độ dài của dãy con tăng dài nhất
    int Pos=0;//vị trí của phần tử cuối dãy con lớn nhất
    //duyệt cua mảng F để tìm giá trị
    for(int i=0;i<n;i++){
        int MaxArray=0;//dãy lớn nhất trước nó
        for(int j=0;j<i;j++)//xét các phần tử trước nó
        {
            if(a[j]<a[i])//kiểm tra dãy tăng
            {
                if(F[j]>MaxArray)//kiểm tra nếu nó lớn hơn cái lớn nhất
                {
                    MaxArray=F[j];
                    p[i]=j;//vị trí nối trước nó:dùng để truy vết
                }
            }
        }
        F[i]+=MaxArray;//nối vào
        if(F[i]>Max){
            Max=F[i];
            Pos=i;//đánh dấu vị trí lớn nhất
        }
    }
    cout<<Max;
    //truy vết
    cout<<"\ncachslay(vitri):\n";
    string posi=to_string(Pos);
    while(Pos>0){
        Pos=p[Pos];
        posi=to_string(Pos)+" "+posi;
    }
    cout<<posi;
}