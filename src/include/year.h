//
// Created by cahlien on 1/23/22.
//

#ifndef ASSIGNMENT9_YEAR_H
#define ASSIGNMENT9_YEAR_H

#include <map>
#include "weekday.h"
#include "months.h"
#include "month.h"
#include "month_factory.h"

class Year
{
public:
    Year();
    explicit Year(int year);
    Year(int year, Weekday start_day);

    void print_year();
private:
    int year;
    Weekday start_day;
    MonthFactory month_factory;
    std::map<Months, Month> month_list;
};
#endif //ASSIGNMENT9_YEAR_H
