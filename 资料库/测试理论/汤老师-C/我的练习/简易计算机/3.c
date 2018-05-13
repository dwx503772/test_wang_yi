#include<stdio.h>
int main()
{
	float a,b;
    int i;
	printf("输入任意两个数：\n");
	scanf("%f%f",&a,&b);
	printf("请输入运算符1 + 2 - 3 * 4 /\n");
	scanf("%d",&i);
	switch(i)
	{
	case 1:
		printf("%.2f\n",a+b);
		break;
	case 2:
		printf("%.2f\n",a-b);
		break;
	case 3:
		printf("%.2f\n",a*b); 
		break;
	case 4:
		if(b==0)			
			printf("除数不能为0，请重新输入\n");	
		else
			printf("%.2f\n",a/b);	
		break;
	default:
		printf("运算符输入错误（1-4）！\n");
	}
}