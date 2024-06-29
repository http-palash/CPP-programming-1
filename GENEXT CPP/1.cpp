#include<iostream>
using namespace std;

class test
{
    int a,b,c;
    public:
        
        void get(int x, int y)
        {
            a=x;
            b=y;
        }
        void add()
        {
            c=a+b;
            cout<<"Sum="<<c;
        }
};

void main()
{
    test A;
    A.get(2,3);
    A.add();
}
