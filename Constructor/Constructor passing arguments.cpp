#include<iostream>
using namespace std;
class add
{
	public:
	add(int x,int y)
    {
	 cout<<"Addition of "<<x<<" and "<<y<<" = "<<x+y;
	}
	void add_float(float x,float y,float z)
    {
     cout<<"\nAddition of "<<x<<" + "<<y<<" + "<<z<<" = "<<x+y+z;
	}	
	~add()
	{
		cout<<"\nBye bye i am destructor ";
	}
};


int main()
{
    add obj(10,20);
    obj.add_float(10.5,11.5,12.5);
	return 0;
}
