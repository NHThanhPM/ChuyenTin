#include <bits/stdc++.h>
using namespace std;
int n,*F;

int main(){
    cin>>n;
    F=new int[n+1];
    F[0]=0;
    for(int i=1;i<=n;i++){
        cin>>F[i];
    }
    int*CachToiUu=new int[n+1];
    int*CachDi=new int[n+1];
    CachDi[1]=0;
    CachToiUu[0]=0;
    CachToiUu[1]=F[1];
    std::cout<<CachToiUu[1];
    // std::cout<<"\n";
    int Cach1;
    int Cach2;
    for(int i=2;i<=n;i++){
        Cach1=abs(F[i]-F[i-1])+CachToiUu[i-1];
        Cach2=3*abs(F[i]-F[i-2])+CachToiUu[i-2];
        if(Cach1<Cach2){
            CachToiUu[i]=Cach1;
            CachDi[i]=i-1;
        }
        else{
            CachToiUu[i]=Cach2;
            CachDi[i]=i-2;
        }
        // std::cout<<"dang o :"<<i<<";cach1:"<<Cach1<<";cach2:"<<Cach2<<";toiuu:";
        std::cout<<' '<<CachToiUu[i];
        // std::cout<<'\n';
    }
    std::cout<<"\n"<<CachToiUu[n];
    // std::cout<<"\nCachsdi:";
    delete[] CachToiUu;
    delete[] F;
    int i=n;
    // string cachdi=to_string(i);
    string cachdi;
    while(i>0){
        cachdi=to_string(i)+' '+cachdi;
        i=CachDi[i];
    }
    std::cout<<"\ncachsdi:"<<cachdi;
    delete[] CachDi;
}