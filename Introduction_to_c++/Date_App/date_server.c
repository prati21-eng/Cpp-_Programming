#include"date.h"
#include<stdlib.h>
#include<stdio.h>

struct date* create_date()
{
    struct date* p_date=NULL;
    p_date=(struct date*)malloc(sizeof(struct date));
    return p_date;

}

void init_date(struct date* p_date,int dd,int mm,int yy)
{
    p_date->day=dd;
    p_date->month=mm;
    p_date->year=yy;
}

int get_day(struct date* p_date)
{
    return p_date->day;
}

int get_month(struct date* p_date)
{
    return p_date->month;
}

int get_year(struct date* p_date)
{
    return p_date->year;
}

void set_day(struct date* p_date,int new_dd)
{
    p_date->day=new_dd;
}

void set_month(struct date* p_date,int new_mm)
{
    p_date->month=new_mm;
}

void set_year(struct date* p_date,int new_yy)
{
    p_date->year=new_yy;
}

void show_date(struct date* p_date)
{
    printf("Date is [%d]-[%d]-[%d]\n",p_date->day,p_date->month,p_date->year); 
}

void destroy_date(struct date* p_date)
{
    if(p_date!=NULL)
    {
        free(p_date);
        p_date=NULL;
    }
    else
    {
        printf("Allready destroyed");
    }
}