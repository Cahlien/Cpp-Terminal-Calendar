//
// Created by cahlien on 1/15/22.
//

#ifndef ASSIGNMENT9_MONTHS_H
#define ASSIGNMENT9_MONTHS_H

#include <iostream>

enum Months
{
    January,
    February,
    March,
    April,
    May,
    June,
    July,
    August,
    September,
    October,
    November,
    December
};

const std::ostream& operator<<(std::ostream& os, const Months& month);
#endif //ASSIGNMENT9_MONTHS_H
