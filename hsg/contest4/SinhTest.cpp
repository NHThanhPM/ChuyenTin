#include<iostream>
#include<random>
int random(int i,int j){
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dist(i,j);
    return dist(gen);
}
int main(){
    freopen("DIEMSO.INP","w",stdout);
    int n=random(1,10e5);
    std::cin>>n;
    // n=10e3;
    std::cout<<n<<'\n';
    for(int i=0;i<n;i++){
        std::cout<<random(-1000,1000)<<' ';
    }
}