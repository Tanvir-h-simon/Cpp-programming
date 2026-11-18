#include <iostream>
#include <ctime>
using namespace std;

int main() {
    // Create the datetime structure and use mktime to fill in the missing members
    struct tm datetime;
    datetime.tm_year = 2023 - 1900; // Number of years since 1900
    datetime.tm_mon = 12 - 1; // Number of months since January
    datetime.tm_mday = 17;
    datetime.tm_hour = 0; datetime.tm_min = 0; datetime.tm_sec = 0;
    datetime.tm_isdst = -1;
    mktime(&datetime);

    string weekdays[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};

    cout << "The date is on a " << weekdays[datetime.tm_wday];

    return 0;
}