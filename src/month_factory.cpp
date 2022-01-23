//
// Created by cahlien on 1/15/22.
//

#include "month_factory.h"

MonthFactory::MonthFactory()
    : year{1}, current_day{Weekday::Monday}
{
}

MonthFactory::MonthFactory(int year)
    : year{year}, current_day{Weekday::Monday}
{
}

MonthFactory::MonthFactory(int year, Weekday first_weekday_of_the_year)
    : year{year}, current_day{first_weekday_of_the_year}
{
}

bool MonthFactory::is_leap_year() const
{
    return ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0);
}

Month MonthFactory::get_month(Months month)
{
    Month new_month;

    if(month == Months::February && is_leap_year())
    {
        new_month = Month(current_day, 29);
        current_day = Weekday(((current_day + 29) % 7));
    }
    else
    {
        new_month = Month(current_day, month_lengths.at(month));
        current_day = Weekday(((current_day + month_lengths.at(month)) % 7));
    }

    return new_month;
}

const std::map<Months, int>& MonthFactory::get_months() const
{
    return month_lengths;
}
