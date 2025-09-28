#include <iostream>

int main(){
    int n;
    std::cin>>n;
    unsigned long long rs=1;
    for(int i=2;i<=n;i++){
        rs*=i;
    }
    std::cout<<rs;
}