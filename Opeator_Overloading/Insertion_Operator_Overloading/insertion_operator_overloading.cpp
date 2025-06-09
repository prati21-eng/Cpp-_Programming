#include<iostream>

class Demo
{
    int a,b,c;

    public:
    Demo(int a,int b,int c)
    {
        this->a=a;
        this->b=b;
        this->c=c;
    }
    friend std::ostream& operator<<(std::ostream& os,const Demo& ref);  // friend function because oly driend function can access priavte data member outside the class
};
std::ostream& operator<<(std::ostream& os,const Demo& ref)
{
    os<<ref.a<<std::endl;
    os<<ref.b<<std::endl;
    os<<ref.c<<std::endl;
    return os;
}
int main()
{
    Demo d1(10,20,30);
    std::cout<<d1;

    Demo d2(20,30,1000);
    std::cout<<d2;
}

