//print out a month. Receive start of the week and month days from the user
//@jim_4067

#include <iostream>
#include <string>

int main () 
{
    int days_in_month = 0;
    int start_of_week = 0;
    std::cout << "Enter the number of days of the month : ";
    std::cin >> days_in_month;
    std::cout <<"Enter the start of the week : ";
    std::cin >> start_of_week;
    
    std::string which_day_tab;
    if(start_of_week == 1){
        which_day_tab = "\t";
    } else if (start_of_week == 2){
        which_day_tab = "\t\t";
    } else if (start_of_week == 3){
        which_day_tab = "\t\t\t";
    }  else if (start_of_week == 4){
        which_day_tab = "\t\t\t\t";
    } else if (start_of_week == 5){
        which_day_tab = "\t\t\t\t\t";
    } else if (start_of_week == 6){
        which_day_tab = "\t\t\t\t\t\t";
    }

    std::string days_of_week[] = {"Sun", "Mon", "Tue", "Wed", "Thur", "Fri", "Sat"};
    for(int index = 0; index <= 6; index++){
        std::cout << days_of_week[index] << '\t';
        if(index == 6 ){
            std::cout << std::endl;
        }
    }

    for(int index = 1; index <= days_in_month; index++){
        if (index == 1) {
            std::cout << which_day_tab << index << "\t";
        } else {
            std::cout << index << "\t";
        }
        if((index+start_of_week) % 7 == 0){
            std::cout << std::endl;
        }
    }
    return 0;
}
