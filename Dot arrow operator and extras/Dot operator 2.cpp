#include<iostream>
using namespace std;

class student{
    public:
        int roll;
        char name[50];
        float per,marks;
}obj;

int main(){

//    student obj;    
    cout<<"Student info\n";
    cout<<"Enter name of student: ";
    cin>>obj.name;
    cout<<"Enter roll no: ";
    cin>>obj.roll;
    cout<<"Enter percentage: ";
    cin>>obj.per;
    cout<<"Enter marks:";
    cin>>obj.marks;
    
    system("cls");
    
    cout<<"Student info\n";
    cout<<"Name: "<<obj.name<<endl;
    cout<<"Roll no: "<<obj.roll<<endl;
    cout<<"Marks obtained: "<<obj.marks<<endl;
    cout<<"Percentage: "<<obj.per<<endl;
}

