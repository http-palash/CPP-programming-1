#include<iostream>
using namespace std;

class abc
{
    int a,b;
    public:
        
    void get(int x,int y)
    {
        a=x;
        b=y;
    }
    
    int add()
    {
        return(a+b);
    }
};

int main()
{
    abc A;
    A.get(20,30);
    cout<<A.add();
}
