#include<stdio.h>
#define N 5
int main()
/*{int i,j,k;//����13579
    for(i=1; i<=N; i++)
	{
		for(j=1; j<=i;j++)
		{
		   printf(" ");
		}
		for(k=1; k<=10-(2*i-1);k++)
		{
		   printf("*");
		}
		printf("\n");
	}

}
*/

/*{
    int i,j;
	for(i=1;i<=N;i++)
	{
//		for(j=1;j<=N;j++)//ÿ��ÿ��10���ַ�
			for(j=1;j<=i;j++)//1-10���ַ���������
		{
		  printf("*");
		}
		printf("\n");

	}

}*/
{//������
 int i,j,k;
    for(i=1; i<=5; i++)
	{
		for(j=1; j<=5-i;j++)
		{
		   printf(" ");
		}
		for(k=1; k<=2*i-1;k++)
		{
		   printf("*");
		}
		printf("\n");
	}

	
}

/*{//����13579
	int i,j;
	for(i=1;i<=N;i++)
	{
		for(j=1;j<=2*i-1;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}*/
/*{ int i,j,k;
    for(i=1;i<=5;i++)
	{
	    //��ӡ�ո�
		for(j=1;j<=i-1;j++)
		{
		   printf(" ");
		}
		//��ӡ�Ǻ�
		for(k=1;k<=11-2*i;k++)
		{
		    //����ǵ�һ���������ȫ����ӡ�Ǻ�
			if(i==1||i==5)
			{
			   	printf("*");
			}
			//������ǵ�һ������У����ӡ��һ�������һ���Ǻ�
		    else
			{
			   if(k==1||k==11-2*i)
			   {
			      printf("*");
			   }
			   else
			   {
			      printf(" ");
			   }
			}
		}
		printf("\n");
	}
*/