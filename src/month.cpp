//
// Created by cahlien on 1/15/22.
//

#include <iomanip>
#include "month.h"

Month::Month()
        : current_day{Weekday(0)}
{

}

Month::Month(Weekday start_day, int length_of_month)
        : current_day{start_day}
{
    for (int i{1}; i <= length_of_month; ++i)
    {
        days_of_the_month.insert({i, current_day});
        this->current_day = Weekday((current_day + 1) % 7);
    }
}

Weekday Month::get_current_day() const
{
    return current_day;
}

void Month::set_current_day(Weekday currentDay)
{
    current_day = currentDay;
}

void Month::print_month()
{
    print_headings();
    set_current_day(days_of_the_month.at(1));

    print_spacers();
    for (auto date: days_of_the_month)
    {
        std::cout << std::setw(4) << date.first << ' ';

        set_current_day(Weekday((current_day + 1) % 7));

        if (date.second == Weekday::Saturday)
        {
            std::cout << '\n';
        }
    }

    std::cout << std::endl;
}

void Month::print_headings()
{
    std::cout << std::setw(5) << "Sun" << std::setw(5) << "Mon" << std::setw(5) <<
              "Tue" << std::setw(5) << "Wed" << std::setw(5) << "Thu" << std::setw(5) <<
              "Fri" << std::setw(5) << "Sat" << '\n' << "------------------------------------\n";
}

void Month::print_spacers()
{
    for (int i{1}; i <= current_day; ++i)
    {
        std::cout << std::setw(5) << ' ';
    }
}

std::ostream& operator<<(std::ostream& os, Month& month)
{

    month.print_month();
    return os;
}
