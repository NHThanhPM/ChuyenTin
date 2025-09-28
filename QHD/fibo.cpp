#include <iostream>

unsigned long long *array;

int main(){
    int n;
    std::cin>>n;
    array=new unsigned long long[n+1];
    array[0]=1;
    array[1]=1;
    array[2]=2;
    for(int i=3;i<=n;i++){
        array[i]=array[i-1]+array[i-2];
    }
    std::cout<<array[n];
    delete[] array;
}

// template<int n>
// class fibo{
// public:
// #if n==0 || n==1
//     int value=1;
// #else
//     concept int value=fibo<n-1>().value + fibo<n-2>().value;
// #endif
// };


// int main(){
//     fibo<3> hihi;
//     std::cout<<hihi.value
// }