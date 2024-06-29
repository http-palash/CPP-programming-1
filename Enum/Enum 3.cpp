#include<iostream>
using namespace std;
int main()
{
	enum gender {Male,Female};
    gender a = Male;
//    gender a;
	cout<<"Enter Gender Male/Female : \n";
	switch(a)
	{
		case Male:
		cout<<"Gender is Male";
		break;
		case Female:
		cout<<"Gender is Female";
		break;
		Default:
		cout<<"Value can be male or female";
	}
	return 0;
}
