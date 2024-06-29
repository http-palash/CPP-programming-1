#include<iostream>
using namespace std;

class a{
    
    int num;
    public:
    a();
    show();
};

a::a()
{
    cout<<"Enter  no: ";
    cin>>num;     
}
void a::show()
{
    cout<<"You entered: "<<num;
}
int main()
{
    a obj;
    obj.a();
    obj.show();
}
