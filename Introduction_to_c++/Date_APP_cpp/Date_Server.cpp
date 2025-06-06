#include<iostream>
#include"Date.hpp"

// Date::Date():day(1),month(1),year(1970){}
Date::Date(int initday,int initmonth,int inityear)
{
    day=initday;
    month=initmonth;
    year=inityear;
}

int Date::getDay()
{
    return day;
}
int Date::getMonth()
{
    return month;
}
int Date::getYear()
{
    return year;
}

void Date::setDay(int new_day)
{
    this->day=new_day;
}
void Date::setMonth(int new_month)
{
    this->month=new_month;
}
void Date::setYear(int new_year)
{
    this->year=new_year;
}

void Date::showDate()
{
    std::cout<<"Day :"<<day<<std::endl;
    std::cout<<"Month :"<<month<<std::endl;
    std::cout<<"Year :"<<year<<std::endl;
}