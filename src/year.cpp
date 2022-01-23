//
// Created by cahlien on 1/23/22.
//

#include "year.h"

void Year::print_year()
{
    for(auto& month : month_list)
    {
        std::cout << "\n--" << month.first;
        std::cout << ' ' << year << "--\n";
        month.second.print_month();
    }
}

Year::Year(int year, Weekday start_day)
    : year{year}, start_day{start_day}, month_factory{year, start_day}
{
    for(auto month : month_factory.get_months())
    {
        const Month newMonth{month_factory.get_month(month.first)};
        month_list.insert({month.first, newMonth});
    }
}

Year::Year(int year)
        : Year(year, Weekday::Sunday)
{
}

Year::Year()
        : Year(2021, Weekday::Sunday)
{
}

