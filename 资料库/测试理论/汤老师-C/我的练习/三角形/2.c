#include<stdio.h>
main()
{
	int a, b, c;
	printf("输入三条边:\n");
	scanf("%d%d%d",&a,&b,&c);
	if(a>0&&b>0&&c>0&&a+b>c&&a+c>b&&b+c>a)
	{
		printf("这是一个三角形！\n");
		if(a==b||a==c||b==c)
		{
			printf("这是一个等腰三角形！\n");
		}
		else printf("这是一个一般的三角形！\n");
				if(a==b&&b==c)
				{
					printf("这是一个等边三角形！\n");
				}
		}

		else printf("这不是一个三角形！\n");
		printf("\n");

}