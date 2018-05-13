#include<stdio.h>
int main()
{
	char a='a';
	int b=1,m=32;
	char c;
	getchar(c);
	putchar(c);
	putchar('\n');
	printf("%c\n%c\n%d\n",a,a+b,a+b);
	printf("%c\n%d\n",a-m,a-m);
}