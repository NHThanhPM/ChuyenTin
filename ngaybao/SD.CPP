#include <fstream>
#include <vector>
#include <cmath>
using namespace std;

int main(){
    std::ifstream input("SD.INP",std::ios::in);
    std::ofstream output("SD.OUT",std::ios::out);
    int L,R;
    while(
    input>>L>>R
    )
    {
        int Np1d2=(L+2)/2;//số N+1/2 lớn nhất
        int N=Np1d2*2-1;
        //mảng để dàng số nguyên tố
        std::vector<bool> snt(R+1,true);
        for(int i=2;i<=sqrt(R);i++){
            if(snt[i]){
                for(int j=i*i;j<=R;j+=i){
                    snt[j]=false;
                }
            }
        }
        int result=0;
        while(N<=R){
            if(snt[Np1d2] && snt[N])result++;
            Np1d2++;
            N+=2;
        }
        output<<result<<'\n';
    }
    input.close();
}