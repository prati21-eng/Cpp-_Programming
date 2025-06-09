#include<iostream>
class Demo
{
    int a,b,c;
    friend std::istream& operator>>(std::istream& is,Demo& ref);
    friend std::ostream& operator<<(std::ostream& os,const Demo& ref);
};

std::istream& operator>>(std::istream& is,Demo& ref)
{
    is>>ref.a;
    is>>ref.b;
    is>>ref.c;
    return is;
}

std::ostream& operator<<(std::ostream& os,const Demo& ref)
{
    os<<"Value of a :"<<ref.a<<std::endl;
    os<<"Value of b :"<<ref.b<<std::endl;
    os<<"Value of c :"<<ref.c<<std::endl;
    return os;
}

int main()
{
    std::cout<<"Enter Value for Data Member"<<std::endl;
    Demo d;
    std::cin>>d;
    std::cout<<d;
    return 0;
}

