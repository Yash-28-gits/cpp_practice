#include<bits/stdc++.h>
#include<iostream>
struct Car{
    char make[256];
    int year;
    int wheels;
    bool isRunning;
};
int main(){
    Car myBMW;
    myBMW.year=2001;
    myBMW.isRunning=true;
    std::cout<<"MY BMW YEAR "<<myBMW.year<<std::endl;

    return 0;
}

//struct is a way to group several data types and it each variable
//is known as member of structure. it can contain different data
//types and it allocates different memory locations for each data type