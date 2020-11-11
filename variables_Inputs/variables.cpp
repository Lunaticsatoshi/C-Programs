#include<iostream>
#include<string>
int main(){
    int age;
    long lng = 100000000000;
    long long llng = 1000000000000;
    float num;
    char c = 'a';
    std::string name;
    std::cout<< "Enter Your name" << std::endl;
    std::cin>> name;
    std::cout<< "Enter your age" << std::endl;
    std::cin>> age;
    std::cout<<"Your name is " << name << " And your are " << age << " years old"<<std::endl;
    num = age/2.0;
    double dnum = 100.000;
    std::cout<< c << std::endl;
    std::cout<< lng<< std::endl;
    std::cout<< dnum << std::endl;
    std::cout<< num << std::endl;
    return 0;
}
