//
// Created by cahlien on 1/15/22.
//

#ifndef ASSIGNMENT9_MONTH_H
#define ASSIGNMENT9_MONTH_H

#include <iostream>
#include <map>
#include "weekday.h"
#include "months.h"

class Month
{
public:
    Month();

    Month(Weekday start_day, int length_of_month);

    std::map<int, Weekday> days_of_the_month;

    [[nodiscard]] Weekday get_current_day() const;

    void set_current_day(Weekday current_day);

    void print_month();

private:
    Weekday current_day;

    void print_headings();

    void print_spacers();
};

std::ostream& operator<<(std::ostream& os, Month& month);

#endif //ASSIGNMENT9_MONTH_H
