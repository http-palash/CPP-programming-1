#include<iostream>
using namespace std;
enum year
{
 Jan,Feb,Mar,Apr,May,Jun,Jul,Aug,Sept,Oct,Nov,Dec	
};

int main()
{
	int i;
	for(i=Jan;i<=Dec;i++)
	{
		cout<<i<<" ";
	}
	return 0;
}
