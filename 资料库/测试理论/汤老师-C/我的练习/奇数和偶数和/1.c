#include<stdio.h>
int main()
/*{
	int s1=0,s2=0;
	int i;
	for(i=1;i<=100;i++)
	{
		if(i%2==0)
			s1=s1+i;	
			else
				s2=s2+i;			
	}
	printf("偶数的和=%d\n",s1);
	printf("奇数的和=%d\n",s2);
}*/
{
	int s1=0,s2=0;
	int i=1;
	while(i<=100)
	{
		s1+=i;
		s2+=i+1;
		i+=2;
	}
	printf("奇数的和=%d\n偶数的和=%d\n",s1,s2);
}