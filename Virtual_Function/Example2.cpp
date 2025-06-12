class Parent
{
    public:
    Parent()
    {
        f3(); //early binding 
    }

    void f1()
    {
        f2();//late bining  implicit this pointer
    }
    virtual void f2()
    {

    }
    virtual void f3()
    {

    }
};

int main()
{
    Parent pobj;
    Parent* ptr = &pobj;
    ptr ->f1();
}