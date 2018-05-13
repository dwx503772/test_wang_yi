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
//	printf("最大的公约数=%d\n最小的公倍数=%d\n",min,a*b/min);
    r=max;
	while(a%r!=0||b%r!=0)
		r--;
	printf("最大的公约数=%d最小的公倍数=%d\n",r,a*b/r);
//	while(a%r!=0||b%r!=0)
//		r++;
//		printf("最小的公倍数=%d\n",r);
}