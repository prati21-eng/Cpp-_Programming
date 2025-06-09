#include<iostream>

class Demo
{
    public :
    
    int a,b;

    Demo()
    {

    }

    Demo(int _a,int _b)
    {
        this->a=_a;
        this->b=_b;
    }

    // Demo operator+(const Demo& ref)const
    // {
    //     Demo temp;

    //     temp.a=this->a+ref.a;
    //     temp.b=this->b+ref.b;
    //     return temp;
    // }

    // Demo operator*(const Demo& ref)const
    // {
    //     Demo temp;

    //     temp.a=this->a*ref.a;
    //     temp.b=this->b*ref.b;
    //     return temp;
    // }


    // Demo operator/(const Demo& ref)const
    // {
    //     Demo temp;

    //     temp.a=this->a/ref.a;
    //     temp.b=this->b/ref.b;
    //     return temp;
    // }

    // Demo operator-(const Demo& ref)const
    // {
    //     Demo temp;

    //     temp.a=this->a-ref.a;
    //     temp.b=this->b-ref.b;
    //     return temp;
    // }

    Demo operator%(const Demo& ref)const
    {
        Demo temp;

        temp.a=this->a%ref.a;
        temp.b=this->b%ref.b;
        return temp;
    }

};

int main()
{
    Demo d1(10,20);
    Demo d2(30,40);

    // Demo d3=d1+d2;
    // Demo d3;
    // d3=d1*d2;

    // Demo d3=d1/d2;

    // Demo d3=d1-d2;

    Demo d3=d1%d2;

    std::cout<<"d3 -> a :"<<d3.a<<" d3 -> b :"<<d3.b<<std::endl;
}