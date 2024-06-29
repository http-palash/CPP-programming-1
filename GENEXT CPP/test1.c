#include <stdio.h>
//#include<conio.h>
#include<windows.h>

void gotoxy(int a,int b)
{
    COORD c;
    c.X=a;
    c.Y=b;
    
    SetConsoleCursorPosition(GetstdHandle(STD_OUTPUT_HANDLE),c);
}
struct result
{
    int s1,s2,s3,s4,s5,r,class;
    char schoolname[25],name[20];
};

int main()
{
//    int set1,set2;
//    set1=10;
//    set2=20;
    int n,i,t,p;
    struct result a[100];
    printf("enter number of records:");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
    	printf("record %d\n",i);

    printf("\nEnter your school name: ");
    scanf("%s",a[i].schoolname);

      printf("\nenter your name: ");
    scanf("%s",a[i].name);

      printf("\nEnter your class: ");
    scanf("%d",&a[i].class);

    printf("\nEnter your marks: ");
    scanf("%d%d%d%d%d",&a[i].s1,&a[i].s2,&a[i].s3,&a[i].s4,&a[i].s5);


      printf("\nenter your roll no.");
    scanf("%d",&a[i].r);
    }

    for(i=1;i<=n;i++)
    {
    	printf("enter record no %d",i+1);

     	gotoxy(10,20);
    	printf("%s",a[i].schoolname);

    	gotoxy(25,4);
    	printf("%s",a[i].name);


    	gotoxy(25,6);
    	printf("%d",a[i].r);

    	gotoxy(25,8);
    	printf("%d",a[i].class);

    	printf("english\t=\t%d\n",a[i].s1);

    	printf("computer science\t=\t%d\n",a[i].s2);

    	printf("physics\t=\t%d\n",a[i].s3);

    	printf("chemistry\t=\t%d\n",a[i].s4);

    	printf("maths\t=\t%d\n",a[i].s5);

    	t=(a[i].s1+a[i].s2+a[i].s3+a[i].s4+a[i].s5);
    	p=t/5;

	printf("marks=%d\npersent=%d",t,p);
    }

}
