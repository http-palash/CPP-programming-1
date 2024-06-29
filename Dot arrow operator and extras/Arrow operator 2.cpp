#include<iostream>
using namespace std;

class student{
    public:
        int roll;
        char name[50];
        float per,marks;
}*p,obj;

int main()
{    
    //student *p,obj;
    p=&obj;    
    cout<<"Student info\n";
    cout<<"Enter name of student: ";
    cin>>p->name;
    cout<<"Enter roll no: ";
    cin>>p->roll;
    cout<<"Enter percentage: ";
    cin>>p->per;
    cout<<"Enter marks:";
    cin>>p->marks;
    
    system("cls");
    
    cout<<"Student info\n";
    cout<<"Name: "<<p->name<<endl;
    cout<<"Roll no: "<<p->roll<<endl;
    cout<<"Percentage: "<<p->per<<endl;
    cout<<"Marks obtained: "<<p->marks<<endl;
    return 0;
}

