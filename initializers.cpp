// 4 ways to initialize
//  assignment, fucntion, syntax or calling constructors

#include<iostream>
int main(){
    printf("INITIALIZING TYPES\n");
    int a=1;
    int b=int(2);
    int c(3);
    int d{4}; // new to cpp
    int e={5};
    printf("A=%d\nB=%d \nC=%d \nD=%d \nE=%d\n",a,b,c,d,e);
    printf("INITIALIZING ARRAYS\n");
    int birth_years[]={2323,4243,5455,6432,4524,6423};
    int john[]={1988};
    


    return 0;
}