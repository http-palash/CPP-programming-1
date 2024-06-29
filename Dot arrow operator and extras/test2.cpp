#include<iostream>
using namespace std;

class base
{
    int i,j;
    public:
    void set(int a,int b)
    {
        i=a;
        j=b;
    }
    void show()
    {
        cout<<i<<""<<j<<"\n";
    }
};
    class derived : public base
    {
        int k;
        public:
        derived(int x)
        {
            k=x;
        }
        void show()
        {
            cout<<k<<"\n";
        }
    };

int main()
{
    derived o(3);
    o.show();
    base ob;
    ob.set(1,2);
    ob.show();
    return 0;
}

