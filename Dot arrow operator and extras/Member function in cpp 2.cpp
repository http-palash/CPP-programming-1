#include<iostream>
using namespace std;

class student
{
	private:
	int rno;float per;char name[50];
	public:
    void read_data()
    {
	 cout<<"Enter name: ";
	 cin>>name;
	 cout<<"Enter roll no: ";
	 cin>>rno;
	 cout<<"Enter percentage: ";
	 cin>>per;
    }
    void printf_data()
    {
     cout<<"\nStudent info\n";
	 cout<<"Name: "<<name<<endl;
	 cout<<"Roll no: "<<rno<<endl;
	 cout<<"Percentage: "<<per<<endl;
    }
};
int main()
{
	student s;
	s.read_data();
	s.printf_data();
	return 0;
}

