#include<stdio.h>
int main()
{
 int i,j,k;
 printf("shuchu:\n");
 for(i=1;i<=4;i++)
 {
   for(j=1;j<=4;j++)
   {
     for(k=1;k<=4;k++)
        {
          if(i!=j&&j!=k&&i!=k)
             printf("组合的三位数为：%d%d%d\n",i,j,k);
        }
   }
 }
}