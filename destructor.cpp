#include<iostream>
class mydateandtime{
    int year;
    public:
        int get_year(){
            return year;
        }
        mydateandtime(int year_in){
            if(!set_year(year_in)){
                year=2019;
            }
        }
        ~mydateandtime(){
            printf("OBJECT DESTRUCTED");
        }

        void add_year(){
            year++;
        }
        bool set_year(int new_year){
            if(new_year<2019) return false;
            year=new_year;
            return true;
        }
};