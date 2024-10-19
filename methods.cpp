#include<iostream>

struct mydateandtime{
    void add_year(){
        year++;
    }
    int year;
};
int main(){
    mydateandtime md;
    md.year=2022;
    printf("year : %d\n",md.year);
    md.add_year();
    printf("year : %d\n",md.year);
    
    return 0;
}