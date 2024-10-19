#include<iostream>
union Variant{
    char myString[10];
    int myInteger;
    double myDouble;
};
int main(){

    Variant v;
    v.myInteger=32;
    printf("My Union Integer: %d\n",v.myInteger);

    v.myDouble=3.23352;
    printf("My Union Double : %f\n",v.myDouble);

    printf("My Union Integer 2: %d\n",v.myInteger);


    return 0;
}

//rarely used union is same as structure in cpp but it differentiates in
// one way that is it assign only one memory space for all the data
//presnt in that and it assigns the largest data type size