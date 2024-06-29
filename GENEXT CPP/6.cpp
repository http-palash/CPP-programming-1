#include<iostream>
using namespace std;

class abc
{
    int a,b,c;
   
    public: 
    void get()
    {
        a=10;
        b=20;
        c=30;
    }
    
    void get(int x)
    {
        a=x;
        b=20;
        c=30;
    }
    
    void get(int x,int y)
    {
        a=x;
        b=y;
        c=30;
    }
    
    void get(int x,int y,int z)
    {
        a=x;
        b=y;
        c=z;
    }
    
    void show()
    {
        cout<<a<<b<<c;
    }
};

int main()
{
    abc obj;
    
    obj.get();
    obj.show();
    cout<<endl;
    obj.get(40);
    obj.show();
    cout<<endl;
    obj.get(60,50);
    obj.show();
    cout<<endl;
    obj.get(110,30,80);
    obj.show();
}
