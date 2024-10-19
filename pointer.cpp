#include<iostream>

//sizeof(int * ); will return 4 in 32bit machine, and will return 8 in 64 bit machine


int main(){
    
    int a= 92;
    std::cout<<a<<std::endl;
    
    int *pi{&a};
    std::cout<<*pi<<std::endl;
    std::cout<<pi<<std::endl;
    *pi=600;
    std::cout<<a<<std::endl;
    std::cout<<pi<<std::endl;
    std::cout<<*pi<<std::endl;
    int j=*pi;
    
    






    return 0;
}