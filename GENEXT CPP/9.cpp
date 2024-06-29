#include<iostream>
using namespace std;

class calc
{
   public:
   
   int add(int x,int y)
   {
       return(x+y);
   }
   
   int add(int x,int y,int z)
   {
       return(x+y+z);
   }
   
   int add(int x,int y,int z,int a)
   {
       return(x+y+z+a);
   }
   
   int add(int x,int y,int z,int a,int b)
   {
       return(x+y+z+a+b);
   }
     
};

int main()
{
   calc obj;
   cout<<obj.add(20,5)<<endl;
   cout<<obj.add(20,5,4)<<endl;
   cout<<obj.add(20,5,4,5)<<endl;
   cout<<obj.add(20,5,7,4,3)<<endl;
}\
