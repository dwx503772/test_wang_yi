#include<stdio.h>
main()
{
	int a, b, c;
	printf("����������:\n");
	scanf("%d%d%d",&a,&b,&c);
	if(a>0&&b>0&&c>0&&a+b>c&&a+c>b&&b+c>a)
	{
		printf("����һ�������Σ�\n");
		if(a==b||a==c||b==c)
		{
			printf("����һ�����������Σ�\n");
		}
		else printf("����һ��һ��������Σ�\n");
				if(a==b&&b==c)
				{
					printf("����һ���ȱ������Σ�\n");
				}
		}

		else printf("�ⲻ��һ�������Σ�\n");
		printf("\n");

}