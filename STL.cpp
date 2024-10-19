#include<iostream>
#include<array>
using namespace std;



void use_ten_inits(int *);
int main(){
    //array and vectors - STANDARD LIBRARY ARRAYS
    // array<int,4>arr{1,2,3,4};
    
    // for(int i=0;i<arr.size();++i){
    //     cout<<arr[i]<<endl;
    // }
    int arr1[]{1,2,3,4};
    use_ten_inits(&arr1[0]);

    //not the correct format



    return 0;
}