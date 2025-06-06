#include<iostream>
#include"Date.hpp"

int main(void)
{
   Date* p_date=new Date(1,1,1970);
   std::cout<<"Day :"<<p_date->getDay()<<std::endl;
   std::cout<<"Month :"<<p_date->getMonth()<<std::endl;
   std::cout<<"Year :"<<p_date->getYear()<<std::endl;
   

   p_date->setDay(31);
   p_date->setMonth(8);
   p_date->setYear(2002);

   p_date->showDate();

   delete p_date;
   p_date=NULL;

    return 0;
}