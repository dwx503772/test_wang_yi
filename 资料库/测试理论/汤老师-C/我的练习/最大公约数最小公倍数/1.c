#include<stdio.h>
int main()
{
	int a,b,max,r;
//	int min;
	printf("input two integers:\n");
	scanf("%d%d",&a,&b);
	max=a>b?a:b;
//	min=a<b?a:b;
//	if(r!=0)
//	{
//		r=max%min;
//		max=min;
//		min=r;
//	}
//	printf("���Ĺ�Լ��=%d\n��С�Ĺ�����=%d\n",min,a*b/min);
    r=max;
	while(a%r!=0||b%r!=0)
		r--;
	printf("���Ĺ�Լ��=%d��С�Ĺ�����=%d\n",r,a*b/r);
//	while(a%r!=0||b%r!=0)
//		r++;
//		printf("��С�Ĺ�����=%d\n",r);
}