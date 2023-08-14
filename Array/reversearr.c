#include <stdio.h>
#define  CAP 5
int main()
{
int a[CAP];
int mid =  CAP/2;
int temp;
int i;
for(i=0;i<CAP;i++)
    scanf("%d",&a[i]);
for(i=0;i<CAP;i++)
    printf("\n%d",a[i]);

for(i=0;i<mid;i++)
{
    temp = a[(CAP-1)-i];
    a([CAP-1]-i)= a[i];
    a[i] = temp;
   
}
printf("\nAfer Reversing\n");
for(i=0;i<CAP;i++)
printf("\n%d",a[i]);


return 0;
}


