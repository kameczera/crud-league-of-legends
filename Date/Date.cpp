#include "Date.h"
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
// const string CSV = "../dados.csv";
using namespace std;

Date::Date(){
    day = 0;
    month = 0;
    year = 0;
}

Date::Date(int day, int month, int year)
{
    this->day = day;
    this->month = month;
    this->year = year;
}


// There's no handlering for wrong dates, for example: 51/13/-123
Date::Date(string dateString)
{
    istringstream ss(dateString);
    string token;
    
    getline(ss, token, '/');
    day = stoi(token);

    getline(ss, token, '/');
    month = stoi(token);

    getline(ss, token, '/');
    year = stoi(token);
}

string Date::stringDate(){
    string stringDate;
    if(day < 10) stringDate = "0" + to_string(day);
    else stringDate = to_string(day);
    stringDate += "/";
    if(month < 10) stringDate += "0" + to_string(month);
    else stringDate += to_string(month);
    stringDate += "/";
    if(year < 10) stringDate += to_string(year);
    else stringDate += to_string(year);

    return stringDate;
}

void Date::setDay(int day){
    this->day = day;
}

int Date::getDay(){
    return day;
}
void Date::setMonth(int month){
    this->month = month;
}

int Date::getMonth(){
    return month;
}
void Date::setYear(int year){
    this->year = year;
}
int Date::getYear(){
    return year;
}