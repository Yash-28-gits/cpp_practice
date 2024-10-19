#include<iostream>
using namespace std;
// 4 types of memory
// static or global
// string pool
// automatic or stack
// free store

int main(){
    int * pi= nullptr;
    cout<<pi<<endl;
    
    int a=63;
    cout<<&a<<endl;
    pi=&a;
    cout<<pi<<endl;
    cout<<*pi<<endl;
    if(nullptr!=pi) cout<<*pi<<endl;






}