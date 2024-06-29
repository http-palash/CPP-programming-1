#include<iostream>
using namespace std;

class calc
{
   public:
   
   int add(int x,int y)
   {
       return(x+y);
   }
   
   int sub(int x,int y)
   {
       return(x-y);
   }
   
   int multiply(int x,int y)
   {
       return(x*y);
   }
   
   int div(int x,int y)
   {
       return(x/y);
   }      
};

int main()
{
   calc obj;
   cout<<obj.add(20,5)<<endl;
   cout<<obj.sub(20,5)<<endl;
   cout<<obj.multiply(20,5)<<endl;
   cout<<obj.div(20,5)<<endl;
}
