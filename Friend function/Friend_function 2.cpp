 //friend return type_name(class ab)
//friend keyword can be friend of more class
#include<iostream>
using namespace std;
class A
{
	private:
	int a,b;
	public:
	void input()
	{
		cout<<"Enter 2 value for a and b : ";
		cin>>a>>b;
	}
	friend void add(A ob);
};
void add(A ob)
{
	int c;
	c=ob.a+ob.b;
	cout<<"sum="<<c;
}
int main()
{	
	A obj;
	obj.input();
	add(obj);
}
