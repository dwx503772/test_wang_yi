#include<stdio.h>
#define N 10
main()
{ 
 int i,j,temp,a[N];
 printf("input ten integer:\n");
 for(i=0;i<N;i++)
  scanf("%d",&a[i]);
 for(i=0;i<N-1;i++)//Ñ¡Ôñ·¨
  for(j=i;j<N;j++)
    {if(a[i]<a[j])
    { 
      temp=a[i];
      a[i]=a[j];
      a[j]=temp;
    }
   }
  printf("shu chu:\n");
  for(i=0;i<N;i++)
    printf("%d ",a[i]);
  printf("\n");
}