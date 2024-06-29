#include<iostream>
using namespace std;
enum calc
{
	a=10,b=20,c=30,d=40,
}/*c1*/;

int main()
{
 calc c1;
 cout<<"Size of enum variable:"<<sizeof(c1)<<" bytes";
 return 0;	
}
