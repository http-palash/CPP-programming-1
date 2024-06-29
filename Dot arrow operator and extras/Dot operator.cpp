#include<iostream>
using namespace std;
struct emp
{
	int id;
	char name[50];
	float salary; 
};
int main()
{
	emp e;
	cout<<"Enter employee name : ";
	cin>>e.name;
	cout<<"Enter employee id : ";
	cin>>e.id;
	cout<<"Enter salary : ";
	cin>>e.salary;
	cout<<"\nEmployee info\n";
	cout<<"Employee name:"<<e.name<<endl;
	cout<<"Employee id:"<<e.id<<endl;
	cout<<"Employee salary:"<<e.salary;
	return 0;
}
