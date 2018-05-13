//指针练习
#include<stdio.h>
int main()
/*{
	int a,b,*p1,*p2,temp;
	p1=&a;
	p2=&b;
	printf("input two integers:\n");
	scanf("%d%d",&a,&b);
	if(*p1>*p2)
	{
		temp=*p1;
		*p1=*p2;
		*p2=temp;
	}
	printf("%d %d\n",a,b);
}*/
{
	int a,b,*q1,*q2;
	q1=&a;
	q2=&b;
    printf("input two integers:\n");
    scanf("%d%d",&a,&b);
	if(a>b) swap(q1,q2);
	printf("%d %d\n",a,b);
}
swap(int *p1,int *p2)
{
	int temp;
	temp=*p1;
	*p1=*p2;
	*p2=temp;
}
/*{
	int day;
	printf("输入一周中的任意一天:\n");
	scanf("%d",&day);
	switch(day)
	{
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		printf("上课\n");
		break;
	case 6:
		printf("学习C语言！\n");
		break;
	case 7:
		printf("复习！\n");
		break;
	default:
		printf("一周只有7天，请输入正确的数字(1-7)！\n");

	}
}*/
