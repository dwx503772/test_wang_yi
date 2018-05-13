#include<stdio.h>
swap(int a,int b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
}
exchange(int p1,int p2,int p3)
{
	if(p1>p2) swap(p1,p2);
	if(p1>p3) swap(p1,p3);
	if(p2>p3) swap(p2,p3);
}
main()
{
	int a1,a2,a3;
	printf("input three numbers:\n");
	scanf("%d%d%d",&a1,&a2,&a3);
	exchange(a1,a2,a3);
	printf("%d %d %d\n",a1,a2,a3);
}