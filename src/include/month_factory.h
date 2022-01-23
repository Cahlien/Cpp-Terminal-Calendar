//
// Created by cahlien on 1/15/22.
//

#ifndef ASSIGNMENT9_MONTH_FACTORY_H
#define ASSIGNMENT9_MONTH_FACTORY_H

#include <map>
#include "weekday.h"
#include "month.h"

class MonthFactory
{
public:
    MonthFactory();
    explicit MonthFactory(int year);
    MonthFactory(int year, Weekday first_weekday_of_the_year);
    Month get_month(Months month);

    [[nodiscard]] const std::map<Months, int>& get_months() const;

private:
    const int year;
    Weekday current_day;
    [[nodiscard]] bool is_leap_year() const;
    const std::map<Months, int> month_lengths{
        {Months::January, 31},
        {Months::February, 28},
        {Months::March, 31},
        {Months::April, 30},
        {Months::May, 31},
        {Months::June, 30},
        {Months::July, 31},
        {Months::August, 31},
        {Months::September, 30},
        {Months::October, 31},
        {Months::November, 30},
        {Months::December, 31}
    };
};
#endif //ASSIGNMENT9_MONTH_FACTORY_H