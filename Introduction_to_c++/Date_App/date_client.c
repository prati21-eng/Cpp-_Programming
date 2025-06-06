#include "date.h"
#include<stdio.h>

void main(void)
{
    struct date* p_date=NULL;
    p_date=create_date();

    init_date(p_date,1,1,1970);

    printf("Day : %d\n",get_day(p_date));
    printf("Month :%d\n",get_month(p_date));
    printf("Year :%d\n",get_year(p_date));

    show_date(p_date);

    set_day(p_date,31);
    set_month(p_date,8);
    set_year(p_date,2002);

    show_date(p_date);

    destroy_date(p_date);
}