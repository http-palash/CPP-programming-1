#include<stdio.h>
void main()
{
	FILE *fp;
	char buff[255];
	fp=fopen("stu.txt","r"); //file open or open ex
	
	while(fscanf(fp,"%s",buff)!=EOF)
	{
		printf("%s",buff);
	}
	
	fclose(fp);
}
