#include<iostream>
using namespace std;

class Abc
{
    int a,b,c;
    public:
    void get(int x,int y);
    void add();
    void sub();
    int div();
};

void Abc::get(int x,int y)
{
    a=x;
    b=y;
}

int Abc::div()
{
    return(a/b);
}

int main()
{
    Abc A;
    A.get(20,5);
    A.add();
    cout<<endl;
    cout<<A.div();
}

void Abc::add()
{
    c=a+b;
    cout<<"Addition:"<<c;
}

void Abc::sub()
{
    c=a-b;
    cout<<"Subtraction: "<<c;
}




