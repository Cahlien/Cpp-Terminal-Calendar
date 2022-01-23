//
// Created by cahlien on 1/15/22.
//
#include "months.h"

const std::ostream& operator<<(std::ostream& os, const Months& month)
{
    switch (month)
    {
        case (January):
            os << "January";
            break;
        case (February):
            os << "February";
            break;
        case (March):
            os << "March";
            break;
        case (April):
            os << "April";
            break;
        case (May):
            os << "May";
            break;
        case (June):
            os << "June";
            break;
        case (July):
            os << "July";
            break;
        case (August):
            os << "August";
            break;
        case (September):
            os << "September";
            break;
        case (October):
            os << "October";
            break;
        case (November):
            os << "November";
            break;
        case (December):
            os << "December";
            break;
        default:
            break;
    }

    return os;
}