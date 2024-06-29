#include<stdio.h>
void main()
{
	FILE *fp;
	
	fp=fopen("stu.txt","w"); //file open or open ex
	
	fprintf(fp,"Hello Studentsdbgdbfg \n"); // write data in file
//	fclose(fp);
}
