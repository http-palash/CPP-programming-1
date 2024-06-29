#include<stdio.h>
void main()
{
	FILE *fp;
	char text[200];
	
	fp=fopen("info.txt","w+"); //file open or open ex

    fputs("This is me ",fp);
    
    fseek(fp,8,SEEK_SET);
    
    fputs("Palash",fp);
    
	fclose(fp); 
}
