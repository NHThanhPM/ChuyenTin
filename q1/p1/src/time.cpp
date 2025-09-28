#include <iostream>
#include <ctime>

int main(int count,char**str){
    time_t begin;
    std::time(&begin);
    system(str[1]);
    time_t end;
    std::time(&end);
    std::cout<<"time:"<<end-begin;
}