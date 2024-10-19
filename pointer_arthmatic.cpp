#include<iostream>
using namespace std;

int main(){
    int a[]{1,2,3,4,5};
    int *pa=a;
    for(int i=0;i<5;i++){
        *pa++ *=3;
        cout<<a[i]<<endl;

    }
    

    // pa+=1;// can do this
    // a +=1; // error



    // *pa=11;
    // a[1]=12;
    // pa[2]=13;
    // *(pa+3)=14;
    





    return 0;
}