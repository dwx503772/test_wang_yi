//ָ����ϰ
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
	printf("����һ���е�����һ��:\n");
	scanf("%d",&day);
	switch(day)
	{
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		printf("�Ͽ�\n");
		break;
	case 6:
		printf("ѧϰC���ԣ�\n");
		break;
	case 7:
		printf("��ϰ��\n");
		break;
	default:
		printf("һ��ֻ��7�죬��������ȷ������(1-7)��\n");

	}
}*/
