#include<iostream>

struct mydateandtime{ //Public by default
    int get_year(){
        return year;
    }
    
    void add_year(){
        year++;
    }
    bool set_year(int new_year){
        if(new_year<2019) return false;
        year=new_year;
        return true;
    };
    private:
        int year;
    
};
int main(){
    mydateandtime md;
    md.set_year(2019);
    printf("year : %d\n",md.get_year());
    md.set_year(2023);
    printf("year : %d\n",md.get_year());
    
    
    return 0;
}

//in this code the functions int he structure are public whereas
//year is private so we can access the fucntion in main which can access
//year in structure but we can't directly access the year from the 
// main function