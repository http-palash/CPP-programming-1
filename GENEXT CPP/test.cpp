#include<iostream>
using namespace std;

class base
{
    int a;
    protected:
    int b;
    public:
    int c;
    
    void get(int x)
    {
        a=x;
    }
    
    void show()
    {
        cout<<a;
    }
};

class der:private base
{
    int d;
    protected:
    int e;
    public:
    int f;
    
    void take(int x1,int x2,int x3,int x4,int x5)
    {
        get(x1);
        d=x2;
        b=x3;
        e=x4;
        c=x5;
    }
    
    void display()
    {
        show();
        cout<<d<<b<<e<<c;
    }
   
};

int main()
{
    der obj;
    obj.take(10,20,30,40,50);
    obj.display();
    obj.f=60;
    cout<<obj.f;
}


