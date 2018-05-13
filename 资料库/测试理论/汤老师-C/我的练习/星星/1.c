#include<stdio.h>
#define N 5
int main()
/*{int i,j,k;//倒立13579
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
//		for(j=1;j<=N;j++)//每行每列10个字符
			for(j=1;j<=i;j++)//1-10个字符靠左排列
		{
		  printf("*");
		}
		printf("\n");

	}

}*/
{//金字塔
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

/*{//靠左13579
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
	    //打印空格
		for(j=1;j<=i-1;j++)
		{
		   printf(" ");
		}
		//打印星号
		for(k=1;k<=11-2*i;k++)
		{
		    //如果是第一行与第五行全部打印星号
			if(i==1||i==5)
			{
			   	printf("*");
			}
			//如果不是第一与第五行，则打印第一个与最后一个星号
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