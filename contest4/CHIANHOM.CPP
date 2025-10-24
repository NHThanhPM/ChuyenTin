#include <bits/stdc++.h>
using namespace std;

void init(){
    std::ios_base::sync_with_stdio(0);cin.tie(NULL);
    #define TASK "CHIANHOM"
    if(fopen(TASK".INP","r")){
        freopen(TASK".INP","r",stdin);
        freopen(TASK".OUT","w",stdout);
    }
}

// struct 
class
HsQHH{
public:
    bool sex;
    unsigned int IQ;
    bool operator<(const HsQHH&n)const {
        if(IQ < n.IQ)return true;
        else if(IQ==n.IQ){
            return sex<n.sex;
        }
        return false;
    }
};

// bool SortCondition(HsQHH&a,HsQHH&b){
//     return a.IQ<b.IQ;
// }


int N;
map<HsQHH,int> A;

void Data(){
    cin>>N;
    // A.resize(N);
    HsQHH temp;
    for(int i=0;i<N;i++){
        cin>>temp.sex>>temp.IQ;
        A[temp]++;
    }
}

int main(){
    //dùng debug mode trong vscode
    // int&temp=N;
    // vector<HsQHH>&cc=A;
    //
    init();
    Data();
    // sort(A.begin(),A.end(),SortCondition);
    //in ra cái mảng đã xắp xếp
    // cout<<"đã xắp xếp:\n";
    // for(int i=0;i<N;i++){
    //     cout<<A[i].sex<<' '<<A[i].IQ<<'\n';
    // }
    //xử lý
    // int result=0;
    // int i=0;//chỉ số của HsQHH sẽ duyệt
    // bool sex;//giới tính sẽ có trong lúc duyệt để kiểm tra xem có bao nhiêu giới tính
    // while(i<N){
    //     lamlai:{};
    //     sex=A[i].sex;
    //     result+=1;//giả sử có 1 giwois tính
    //     while(i<N-1){
    //         i++;
    //         if(A[i-1].IQ!=A[i].IQ)goto lamlai;
    //         if(sex!=A[i].sex){
    //             result++;//phát hiện thêm một giới tính
    //             while(i<N-1){
    //                 i++;
    //                 if(A[i-1].IQ!=A[i].IQ){
    //                     break;
    //                 }
    //             }
    //             goto lamlai;
    //         }
    //     }
    //     i++;
    // }
    // cout<<"ketqua:\n";
    cout<<A.size();
}