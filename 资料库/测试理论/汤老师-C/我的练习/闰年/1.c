#include<stdio.h>
int main()
{
	int year;
	printf("输入年份:\n");
	scanf("%d",&year);
	if((year%4==0&&year%100!=0)||year%400==0)
		 printf("该年是闰年！\n");
	else 
		printf("该年不是闰年！\n");
	return 0;
}