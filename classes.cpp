#include<iostream>
class myDateandtime{
    int year;
public:
    int get_year(){
        return year;
    }
    int update_year(int new_year){
        if(new_year<2019) return false;
        year=new_year;
        return true;
    }
    void add_year(){
        year++;
    }
    
};
int main(){
    // myDateandtime md;
    // md.update_year(2023);
    // printf("Year : %d\n",md.get_year());
    // md.update_year(2020);
    // printf("Year : %d\n",md.get_year());
    myDateandtime clock;
    if(!clock.update_year(2018)){
        clock.update_year(2019);
    }
    clock.add_year();
    printf("year : %d\n",clock.get_year());





    return 0;
}


//in class all the members of the class are default private we have to
// specifiy to which not to private the memebers by using public keyword