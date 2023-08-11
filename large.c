#include<stdio.h>
int main()
{
int x,y,z;
printf("Enter the value = ");
scanf("%d %d %d",&x,&y,&z);

int k=(x>y)? x>z?x:z : y>z? y:z;
printf("\n %d Greatest value is = \n",k);
}
