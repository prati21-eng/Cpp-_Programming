#include<cstdlib>
#include<iostream>
class Demo
{
    public:
    int a;
    int b;
    int *p;

    Demo()
    {

    }

    Demo(int _a,int _b,int _p)
    {
        this->a=_a;
        this->b=_b;
        this->p=(int*)malloc(sizeof(int));
        *(this->p)=_p;
    }
};

int main()
{
    Demo dobj1(10,20,30);

    std::cout<<"a: "<<dobj1.a<<" b :"<<dobj1.b<<" *p :"*(dobj.p)<<std::endl;
    return 0;
}