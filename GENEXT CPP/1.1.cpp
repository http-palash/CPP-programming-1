#include<iostream>
using namespace std;

class test 
{
    int a , b;
    public:
        int c;
    
    void get()
    {
        a=10;
        b=20;
    }
    
    void show()
    {
        cout<<a<<b;
    }
};


void main()
{
    test A;
    
    A.get();
    A.show();
    A.c=80;
    cout<<A.c;
}
