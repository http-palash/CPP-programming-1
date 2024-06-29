#include<iostream>
using namespace std;
void square (int *x, int *y)
{
*x = (*x) * --(*y);
}
int main ( )
{
int number = 30;
square(&number, &number);
cout<< number;
return 0;
}
//What
