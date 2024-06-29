#include<iostream>
using namespace std;
class test
{
    public: int a;
    void get()
    {
      cout<<"Enter a no: ";
      cin>>a;
    }  
  
    void even ()
    {
      if(a%2==0)
      {
        cout<<a<<" is even no";
      }
      else
      {
          cout<<a<<"is odd no";
      }
    }
  };

class n
{
    public:
    int a;
    
    void get()
    {
        cout<<"\nEnter a no: ";
        cin>>a;
   }
    void positive()
    {
        if(a>0)
        {
            cout << a<< " is positive";
        }
        else
        {
          cout<<a<< " is negative";
        }
    }
};

int main()
{
    test a;
    n b;
    
    a.get();
    a.even();
    
    b.get();
    b.positive();
}
