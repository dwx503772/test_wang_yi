#include<stdio.h>
int main()
{
	float a,b;
    int i;
	printf("����������������\n");
	scanf("%f%f",&a,&b);
	printf("�����������1 + 2 - 3 * 4 /\n");
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
			printf("��������Ϊ0������������\n");	
		else
			printf("%.2f\n",a/b);	
		break;
	default:
		printf("������������1-4����\n");
	}
}