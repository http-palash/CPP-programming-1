#include<iostream>
using namespace  std;
class bca
{
    private:
  	int a;char b;float c;
  	public:
	bca()//Contructor have same name as class
  	{
  		a=10;b='P';c=1.44;}
  		
  	   void show()
	   {
		 cout<<"int Value = "<<a<<endl;
		 cout<<"char value = "<<b<<endl;
		 cout<<"Float value = "<<c<<endl;
	    }
	    void print_class()
	    {
	    	cout<<"I am bca class";
		}
    

		
};
int main()
{
	bca d;//Constructor will be automticaally called
	d.show();
	d.print_class();
	return 0;
}
