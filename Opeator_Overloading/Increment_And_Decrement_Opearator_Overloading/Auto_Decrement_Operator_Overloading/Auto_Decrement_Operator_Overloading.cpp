#include<iostream>

class Demo
{
    int a,b,c;
    public:

    Demo(int _a,int _b,int _c)
    {
        this->a=_a;
        this->b=_b;
        this->c=_c;
    }

    //postdecrement
    Demo operator--(int a)
    {
        this->a--;
        this->b--;
        this->c--;
        return *(this);
    }

    //predecrement
    Demo operator--()
    {
        Demo temp=*(this);
        this->a--;
        this->b--;
        this->c--;
        return temp;
    }
    
    
    friend std::ostream& operator<<(std::ostream& os,const Demo& ref)
    {
        os<<ref.a<<std::endl;
        os<<ref.b<<std::endl;
        os<<ref.c<<std::endl;
        return os;
    }
};
int main()
{

    Demo d1(10,20,30);
    //post decrement
    Demo d2=d1--;
    std::cout<<d2;

    //predecrement
    Demo d3=--d1;
    std::cout<<d3;

    std::cout<<d1;

    return 0;
}