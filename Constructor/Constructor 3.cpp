#include<iostream>
using namespace std;

class emp_info{
  
  private:
   int salary,age;
  
  public:
  emp_info(){
      salary=70000;
      age=20;
  }    
  void printdata(){
      
      cout<<"\nEnployee info:\n";
      cout<<"Employee salary: "<<salary<<endl;
      cout<<"Employee age: "<<age<<endl;
  }
};

int main()
{
    emp_info i;
    i.printdata();
    return 0;
}
