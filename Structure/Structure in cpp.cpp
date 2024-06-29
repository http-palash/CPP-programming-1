#include<iostream>
using namespace std;

struct student{
        char name[50];
        int roll;
        float per,marks;
};

int main(){
    
    student s;
    cout<<"Student info\n";
    cout<<"Enter name of student: ";
    cin>>s.name;
    cout<<"Enter roll no: ";
    cin>>s.roll;
    cout<<"Enter percentage: ";,
    cin>>s.per;
    cout<<"Enter marks:";
    cin>>s.marks;
    
    system("cls");
    
    cout<<"Student info\n";
    cout<<"Name: "<<s.name<<endl;
    cout<<"Roll no: "<<s.roll<<endl;
    cout<<"Marks obtained: "<<s.marks<<endl;
    cout<<"Percentage: "<<s.per<<endl;
    
    return 0;
}
