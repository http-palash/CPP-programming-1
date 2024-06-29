#include<iostream>
using namespace std;

class test
{
    int a,b;
    public:
    
    test(int x,int y)
    {
        a=x;
        b=y;
    }
    
    void show()
    {
        cout<<a<<endl<<b;
    }
};

int main()
{
    test t(5,10);
    t.show();
}
