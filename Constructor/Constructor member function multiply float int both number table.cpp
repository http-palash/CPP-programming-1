#include<iostream>
using namespace std;
// Class section
class intmult
{
    private: int num;
    public:
        intmult();
        printtable1();
};

// i/p section member constructor
intmult::intmult()
{
    cout<<"\nEnter a integer number:";
    cin>>num;
}

//Member function
intmult::printtable1()
{
    for(int i=1;i<11;i++)
    {
        cout<<i<<"*"<<num<<"="<<i*num<<endl;
    }
}


class floatmult
{
    private: float num;
    public:
        floatmult();
        printtable2();
};

floatmult::floatmult()
{
    cout<<"\nEnter a float number: ";
    cin>>num;
}

floatmult::printtable2()
{
    for(int i=1;i<11;i++)
    {
        cout<<i<<" * "<<num<<" = "<<i*num<<endl;
    }
}

int main()
{
  intmult obj;
  obj.printtable1();  
  floatmult o;
  o.printtable2(); 
  return 0;
}



