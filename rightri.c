#include <stdio.h>
void main()
{
    int i,j,n;
    printf("Enter a num :");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
    printf("\n");
    }
    for(int i=1;i<=n;i++)
     {
         for(j=n-1;j>=i;j--)
        {
            printf("*");
        }
    printf("\n");
    }
}	
