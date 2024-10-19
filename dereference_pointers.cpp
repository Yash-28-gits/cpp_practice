#include<iostream>
//& address of operator
// * dereference operator
using namespace std;
int main(){
    // int myvariable{};
    // printf("myvaruable: %d\n",myvariable);
    // int *myvariable_add=&myvariable;
    // printf("&myvaiable: %p\n",myvariable_add);
    // *myvariable_add=995;
    // printf("&myvaiable: %d\n",myvariable);

    
    // printf("int : %p",myvariable_add);
    int myAge=0;
    int* myAge_add=&myAge;
    printf("Value at my age address : %d \n",*myAge_add);
    printf("myage address : %p\n",myAge_add);
    *myAge_add=1099;
    printf("Value at my age address: %d\n",*myAge_add);
    printf("myage address: %p\n",myAge_add);





    return 0;
}
