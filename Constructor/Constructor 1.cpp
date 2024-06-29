#include<iostream>
using namespace  std;
class data
{
  private: int x,y;
  public:

  
  	data()//Contructor have same name as class
  	{
  		x=10;y=20;
  		cout<<"Hello i am constructor and i intialize value of x and y as "<<x<<" and "<<y;
	  }
		
};
int main()
{
	data d;//Constructor will be automticaally called
	return 0;
}
