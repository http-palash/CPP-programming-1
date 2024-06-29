#include<stdio.h>
void main()
{
	FILE *fp;
	char c;
	
	fp=fopen("MYFile2.txt","w"); //file open or open ex

    fputs("Hello genext students",fp);


	fclose(fp);
}
