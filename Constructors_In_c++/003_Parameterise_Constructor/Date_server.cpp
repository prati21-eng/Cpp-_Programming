#include<cstdio>
#include"Date_header.hpp"

Date::Date(int init_day,int init_month,int init_year)
{
    this->day=init_day;
    this->month=init_month;
    this->year=init_year;
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

int Date::getDay()const
{
    return this->day;
}
int Date::getMonth()const
{
    return this->month;
}
int Date::getYear()const
{
    return this->year;
}

void Date::show()const
{
    printf("Date is %d/%d/%d\n",this->day,this->month,this->year);
}