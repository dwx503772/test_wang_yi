#include<stdio.h>
int main()
{
	int year;
	printf("�������:\n");
	scanf("%d",&year);
	if((year%4==0&&year%100!=0)||year%400==0)
		 printf("���������꣡\n");
	else 
		printf("���겻�����꣡\n");
	return 0;
}