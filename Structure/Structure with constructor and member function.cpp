#include<iostream>
using namespace  std;
struct bca
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
    

		
};
int main()
{
	bca d;//Constructor will be automticaally called
	d.show();
	return 0;
}
