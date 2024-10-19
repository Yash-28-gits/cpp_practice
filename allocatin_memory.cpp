#include<iostream>
using namespace std;
int main(){

    int *p=new int;
    int *p1= new int (42);
    int *p2= new int {42};
    cout<<sizeof(p)<<endl;
    cout<<sizeof(p1)<<endl;
    cout<<sizeof(p2)<<endl;






    return 0;
}