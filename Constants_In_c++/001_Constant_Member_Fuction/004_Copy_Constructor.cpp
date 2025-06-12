#include <iostream>
class Date
{
    int day;
    int month;
    int year;

    public:
    Date():day(1),month(1),year(1970)
    {

    }
    void show() const // constant member function 
    {
        // this->day=50;  -->not allowed if you use constant memeber function
        std::cout<<"day : "<<this->day<<" Month:"<<this->month<<" Year :"<<this->year<<std::endl;
    }
};

int main()
{
    Date mydate1;
    mydate1.show();    

    Date mydate2(mydate1); 
    mydate2.show();
    return 0;

}