#include<stdio.h>
int main()
{
	FILE *fp;
	char ch;
	if((fp=fopen("H:\\2.txt","rt"))==NULL)
	{
		printf("\ncan not open file strick any key exit!");
		getchar();
		exit(0);

	}
/*printf("input sting:\n");
	ch=getchar();
	while(ch!='\n')
	{
		fputc(ch,fp);
	    ch=getchar();
	}
	rewind(fp);
	ch=fgetc(fp);*/
	while(ch!=EOF)
	{
		putchar(ch);
		ch=fgetc(fp);
	}
	fclose(fp);
	printf("\n");
}