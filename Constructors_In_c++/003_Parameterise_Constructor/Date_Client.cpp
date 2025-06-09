#include<cstdio>
#include"Date_header.hpp"

int main()
{
    Date myDate1(1,1,1970);
    myDate1.show();
    myDate1.setDay(31);
    myDate1.setMonth(8);
    myDate1.setYear(2002);
    myDate1.show();

    printf("Day is :%d\n",myDate1.getDay());
    printf("Month is :%d\n",myDate1.getMonth());
    printf("Year is :%d\n",myDate1.getYear());

    return 0;
}