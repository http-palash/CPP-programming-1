#include<iostream>
using namespace std;
class multiply
{
	private:
	int i,x;
	public:
	multiply();
    void print_table();
};

        multiply::multiply()
		{
			cout << "Enter any  number for printing table = ";
			cin >> x;
		}
        void multiply:: print_table()
		{
			for(i=1;i<11;i++)
			{
				cout<<i<<"*"<<x<<"="<<i*x<<endl;
			}
		}
int main()
{
	multiply m;
	m.print_table();
	return 0;
}
