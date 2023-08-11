#include<stdio.h>
int main()
{
    int num;
    int i,j,k,l,count=0;

    scanf("%d",&num);
    for(i=1;i<num;i++)
    {
        for(j=i;j<=num;j++)
        {
          for(k=j;k<=num;k++)
          {
            for(l=k;l<=num;l++)
            {
                if((i+j+k+l)==num)
            {
                printf("%d+%d+%d+%d=%d\n",i,j,k,l,num);
                count++; 
            }   
            }
          }
        }
    }     
    printf("number of ways%d",count);
}   