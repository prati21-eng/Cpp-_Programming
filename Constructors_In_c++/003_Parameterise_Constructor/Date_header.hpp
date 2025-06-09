class Date
{
    private:
    int day;
    int month;
    int year;

    public:
    Date(int init_day,int init_month,int init_year);
    void setDay(int new_day);
    void setMonth(int new_month);
    void setYear(int new_year);

    int getDay()const;
    int getMonth()const;
    int getYear()const;
    void show()const;

};