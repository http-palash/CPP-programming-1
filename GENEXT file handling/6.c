#include<stdio.h>
void main()
{
	FILE *fp;
	char text[200];
	
	fp=fopen("MYFile2.txt","r"); //file open or open ex

    printf("%s",fgets(text,200,fp));

    
	fclose(fp);
}
