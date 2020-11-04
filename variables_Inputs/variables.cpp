#include<iostream>
#include<string>
int main(){
    int age;
    float num;
    char c = 'a';
    std::string name;
    std::cout<< "Enter Your name" << std::endl;
    std::cin>> name;
    std::cout<< "Enter your age" << std::endl;
    std::cin>> age;
    std::cout<<"Your name is " << name << " And your are " << age << " years old"<<std::endl;
    num = age;
    std::cout<< c;
    std::cout<< num;
    return 0;
}
