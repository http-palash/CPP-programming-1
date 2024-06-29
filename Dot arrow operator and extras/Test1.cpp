#include<iostream>
using namespace std;

class A
{
	private:int a;
	public:
		A(int b)
		{
			for(int i=0;i<11;i++)
			cout<<b<<"*"<<i<<"="<<b*i<<endl;
		}
		void input()
		{
			cout<<"Enter a no to print table: ";
			cin>> a;
		}
		friend void multiply(A obj);
	
};
void multiply(A obj)
{
	int c;
	c=obj.a;
	
	for(int i=0;i<11;i++)
	cout<<c<<"*"<<i<<"="<<c*i<<endl;
}
int main()
{
	
//	A obj();
	A obj(2);
	obj.input();
	multiply(obj);
}
