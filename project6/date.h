#ifndef DATE_H
#define DATE_H

#include <string>

class Date {
private:
    std::string dateString;  // original "mm/dd/yyyy"
    int month{0};
    int day{0};
    int year{0};

public:
    Date();
    void init(const std::string& dateStr); // expects "mm/dd/yyyy"
    void printDate() const;                // prints "MonthName d, yyyy"
    std::string toLongString() const;      // "MonthName d, yyyy"
};

#endif // DATE_H