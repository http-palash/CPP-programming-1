#include<stdio.h>
void main()
{
	FILE *fp;
	
//	char ch[255];
	char c;
	
	fp=fopen("MYFile.txt","r"); //file open or open ex
//	fputc('a',fp);

    while((c=fgetc(fp))!=EOF)
    {
    	printf("%c",c);
	}

//	c=fgetc(fp);
//	printf("%c",c);
//	c=fgetc(fp);
//	printf("%c",c);
//	c=fgetc(fp);
//	printf("%c",c);
//    
	
	fclose(fp);
}
