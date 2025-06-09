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
    Demo(int a,int b,int c)
    {
        this->a=a;
        this->b=b;
        this->p=(int*)malloc(sizeof(int));
        *(this->p)=c;
    }

    void operator=(Demo& ref)
    {
        this->a=ref.a;
        this->b=ref.b;
        this->p=(int*)malloc(sizeof(int));
        *(this->p)=*(ref.p);
    }

    ~Demo()//destructor
    {
        delete this->p;
    }

};

int main(void)
{
    Demo dobj1(10,20,30);
    std::cout<<"a :"<<dobj1.a<<" b:"<<dobj1.b<<" *p :"<<*(dobj1.p)<<std::endl;

    Demo dobj2;
    dobj2=dobj1;
    (*(dobj1.p))++;
    std::cout<<"First Object"<<std::endl;
    std::cout<<"a :"<<dobj1.a<<" b:"<<dobj1.b<<" *p :"<<*(dobj1.p)<<std::endl;
    std::cout<<"Second  Object"<<std::endl;
    std::cout<<"a :"<<dobj2.a<<" b:"<<dobj2.b<<" *p :"<<*(dobj2.p)<<std::endl;
    return 0;
}
