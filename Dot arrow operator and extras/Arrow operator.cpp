#include<iostream>
#include<stdlib.h>
using namespace std;
struct emp
{
	int emp_id;
	char name[50];
	float salary;
};
int main()
{
	//*ptr=(cast_type*)malloc(byte_size);
	emp *e=(emp*)malloc(sizeof(emp));
	cout<<"Employee name:";
	cin>>e->name;
	cout<<"Employee salary:";
	cin>>e->salary;
	cout<<"Employee id:";
	cin>>e->emp_id;
	
	cout<<"\nEmployee info\n";
	cout<<"Employee name:"<<e->name<<endl;
	cout<<"Employee salary:"<<e->salary<<endl;
	cout<<"Employee id:"<<e->emp_id;
	
	return 0;
	
}
