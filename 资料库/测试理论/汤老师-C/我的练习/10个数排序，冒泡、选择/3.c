#include<stdio.h>
#define N 10
main()
{ 
 int i,j,temp,a[N];
 printf("input ten integer:\n");
 for(i=0;i<N;i++)//Ã°Åİ·¨
  scanf("%d",&a[i]);
 for(j=0;j<N;j++)
  for(i=0;i<N-j;i++)
   {
    if(a[i]<a[i+1])
    {
      temp=a[i];
      a[i]=a[i+1];
      a[i+1]=temp;
    }
   }
  printf("shu chu:\n");
  for(i=0;i<N;i++)
    printf("%d ",a[i]);
  printf("\n");
}