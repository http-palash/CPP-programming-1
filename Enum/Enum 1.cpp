#include<iostream>
using namespace std;
enum week 
{
	sunday,monday,tuesday,wednesday,thursday,friday,saturday,
};
int main()
{
	week day;
	day = sunday;
	cout<<"day"<<day+1<<endl;
	return 0;
}
