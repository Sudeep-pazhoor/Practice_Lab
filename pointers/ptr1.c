#include<stdio.h>
int main()
{
    int a=10;
    int *p;

    p=&a[10];

    printf("\n address of a=zu and its value %d",&a,a);
    printf("\n address of p=zu and its value %d",&p,p);
    printf("\n value stored at zu is%d",p,*p);
    *p=20;
    printf("\n address of p=zu and its value %d",&a,a);
    p=&arr[0];
    printf("\n address of a[0]=%u and its value %d",&arr[0],arr[0]);
    printf("\n address of a[1]=%u and its value %d",&arr[1],arr[1]);
    printf("\n address of a[2]=%u and its value %d",&arr[2],arr[2]);
    printf("\n address of a[1]=%u and its value %d",(arr+1),*(arr+1));
    scanf("%d",(arr+1));
    p=arr;
    printf("\n value store t=%u is %d",p,*p);
    p=arr+1;
    printf("\n value store t=%u is %d",p,*p);
    p=arr+2;
    printf("\n value store t=%u is %d",p,*p);
    return 0;

}