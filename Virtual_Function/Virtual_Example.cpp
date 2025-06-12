#include<iostream>
// using namespace std;
class Parent{
    int a;
    public:

    void fun()
    {
        std::cout<<"Parent non virtual function fun :"<<std::endl;
    }

    virtual void gun()
    {
         std::cout<<"Parent virtual function gun:"<<std::endl;
    }
};

class Child :public Parent
{
    int b;
    public:
    void gun()
    {
        std::cout<<"Child virtual function gun:"<<std::endl;
    }

    virtual void sun(){
        std::cout<<"Child virtual function sun:"<<std::endl;
    }

    void run()
    {
        std::cout<<"child non virtual function run:"<<std::endl;
    }
};

int main()
{

    Child cobj;
    int* p =reinterpret_cast<int*>(&cobj);

    int* q =reinterpret_cast<int*>(*p); 

    void (*fp)() =(void(*)())*q;
    fp();

    void (*fp1)() =(void(*)())*(q+1);
    fp1();
    return 0;
}