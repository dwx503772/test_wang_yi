#include<stdio.h>
int main()
{
	int i=43,m;
	m=(i++,--i,i+4);
		printf("%d\n",m);
}
