#include<stdio.h>
int main()
{
	int s=0;
	int i=1;
	while(i<=10)
	{
		s=s+i*i;
		i++;
	}
	printf("%ld\n",s);
}
/*{
	long int s=1;
	int i=1;
	do
	{
		s=s*i;
		i++;
	}while(i<=10);
	printf("%ld\n",s);
}
*/