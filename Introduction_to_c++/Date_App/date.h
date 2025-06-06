struct date{
    int day;
    int month;
    int year;
};

struct date* create_date();
void init_date(struct date*,int,int,int);

int get_day(struct date*);
int get_month(struct date*);
int get_year(struct date*);

void set_day(struct date*,int);
void set_mont(struct date*,int);
void set_year(struct date*,int);

void show_date(struct date*);

void destroy_date(struct date*);
