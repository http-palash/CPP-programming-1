#include<stdio.h>
void main()
{
	FILE *fp;
	int id,check=0;
	char name[30];
	float salary;
	
    a1:fp=fopen("emprec.txt","a"); //file open or open ex
	
	if(fp==NULL)
	{
		printf("File does not Exists");
		return(0);
	}
	printf("Enter ID\n");
	scanf("%d",&id);
	
	fprintf(fp,"ID=%d\n",id);
	
	printf("ENTER THE NAME\n");
	scanf("%s",name);
	
	fprintf(fp,"Name=%s\n",name);
	
	printf("Enter salary\n");
	scanf("%f",&salary);
	
	fprintf(fp,"Salary=%.2f \n",salary);
	
	printf("Enter 1 for next any key to close file\n" );
	scanf("%d",&check);
	
	if(check==1)
	{
		goto a1;
	}
	else
	{
	 printf("\nElse working");
      fclose(fp);
	}

}
