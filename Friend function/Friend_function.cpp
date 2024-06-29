 #include<iostream>
 using namespace std;
 class myclass
 {
 	private:
    int a,b;
    public:
    friend int sum(myclass x);
    myclass(int i,int j);
};

myclass::myclass(int i,int j)
{
	a=i;b=j;
 } 

int sum(myclass x)
{
	return x.a+x.b;
}

int main()
{ 
	myclass n(3,4);
	cout<<sum(n);
}
