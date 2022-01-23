#include <iostream>
#include <vector>
#include "year.h"

int main(int argc, char* argv[])
{
    int start_day{};
    int calendar_year{};
    std::cout << "Enter the year: ";
    std::cin >> calendar_year;
    std::cout << "What day of the week is January 1, " << calendar_year << "?\n[1: Sunday ... 7: Saturday]: ";
    std::cin >> start_day;

    auto year = Year(calendar_year, Weekday(start_day - 1));

    year.print_year();

    return 0;
}
