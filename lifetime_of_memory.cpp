#include<iostream>
using namespace std;

//life of memory is there till we dont write delete to delete the memory



int *do_something(int * pInt){
    *pInt  *= 10;
    return pInt;
}
int main(){

    int *p1=new int(42); //RAII
    int * p2=do_something(p1);
    delete p1;
    p1=nullptr;




    return 0;
}