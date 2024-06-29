#include<iostream>
using namespace std;
class flmultiply
{
	private:
	int i;
	float x;
	public:
	flmultiply();
    void print_table();
};

        flmultiply::flmultiply()
		{
			cout << "Enter any  number for printing table = ";
			cin >> x;
		}
        void flmultiply:: print_table()
		{
			for(i=1;i<11;i++)
			{
				cout<<i<<"*"<<x<<"="<<i*x<<endl;
			}
		}
int main()
{
	flmultiply m;
	m.print_table();
	return 0;
}
