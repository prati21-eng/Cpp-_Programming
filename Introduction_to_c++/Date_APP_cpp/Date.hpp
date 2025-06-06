class Date
{
    private:
    int day;
    int month;
    int year;

    public:
    Date();
    Date(int initday,int initmonth,int inityear);

    int getDay();
    int getMonth();
    int getYear();

    void setDay(int new_day);
    void setMonth(int new_month);
    void setYear(int new_year);

    void showDate();

    
};