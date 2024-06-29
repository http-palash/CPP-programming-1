#include<iostream>
using namespace std;

class test
{
    int fact=1,n,i;
    public:
    void get(int x)
    {
        n=x;
    }
    
    void f()
    {
        while(n>=1)
        {
            fact=fact*n;
            n--;
        }
        cout<<"factorial :"<<fact;
    }
};

int main()
{
    test t1;
    t1.get(3);
    t1.f();
    
}
