#ifndef DATE_H
#define DATE_H
#include <string>
#include <vector>
using namespace std;

class Date {
    private:
        int day;
        int month;
        int year;

    public:
        Date();
        Date(int day, int month, int year);
        Date(string dateString);
        void setDay(int day);
        string stringDate();
        int getDay();
        void setMonth(int month);
        int getMonth();
        void setYear(int year);
        int getYear();
};

#endif