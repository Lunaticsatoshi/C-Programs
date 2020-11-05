#include<iostream>
#include<cmath>
int myFunc(int base, int power){
 return pow(base,power);
}
int main(){
    int base, power;
    std::cout<< "Enter the base number: "<< std::endl;
    std::cin>> base;
    std::cout<< "Enter the power: "<< std::endl;
    std::cin>> power;
    double result = pow(base,power);
    double resultInFunc = myFunc(base,power);
    std::cout<<"The power of number is: "<< result <<std::endl;
    std::cout<<"The power of number using self defined function is: "<< resultInFunc << std::endl;
    return 0;
}
