#include<iostream>
using namespace std;

class test1
{
    int a,b,c;
    public:
        
    void take(int x,int y)
    {
        a=x;
        b=y;
    }
    
    void multiply()
    {
        c=a*b;
        cout<<"Multiply:"<<c;
    }
    
};

class test2
{
    int a,b,c;
    public:
        
    void take(int x,int y)
    {
        a=x;
        b=y;
    }
    
    void div()
    {
        c=a/b;
        cout<<"\nDivision:"<<c;
    }
};

int main()
{
    test1 t1;
    test2 t2;
    
    t1.take(2,3);
    t1.multiply();
    
    t2.take(2,3);
    t2.div();
}
