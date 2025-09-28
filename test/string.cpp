#include <string>
#include <iostream>

int main(){
    std::string a="con cac";
    // a.erase(0,3);
    a.insert(1,"hihihi");
    std::cout<<a<<'\n';
    std::cout<<a.find("cac");
}