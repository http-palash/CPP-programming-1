#include<iostream>
using namespace std;
class a
{
 public:int a,b,c;
};
int main()
{
	a obj,*p;
	p=&obj;
	p->a=5;
	p->b=6;
	p->c=9;
	cout<<p->a<<endl<<p->b<<endl<<p->c;
	return 0;
}
