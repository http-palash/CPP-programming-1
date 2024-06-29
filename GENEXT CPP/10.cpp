#include<iostream>
using namespace std;

int factorial(int a)
{
    int i,z;
    
    for(i=1;i<=a;i++)
    {
        z=z*i;
    }
    return z;
}

int main()
{
    int x,y;
    
    printf("Enter a number : ");
    scanf("%d",&x);
    
    y=factorial(x);
    printf("Factorial of %d is : %d",x,y);
}

