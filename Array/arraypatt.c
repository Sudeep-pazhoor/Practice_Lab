#include<stdio.h>
int main()
{
    int *ptr;
    int arr[2]={1,2};
    ptr = &arr[0]; //base address of  an array or head of an array
    printf("\n%d",arr[0]);
    printf("\nptr notation =%d",*(arr+0));
    printf("\naddress of arr[0]=%u",&*(arr+0));
     printf("\naddress of arr[1]=%u",&*(arr+1));
   // scanf("%d",&*(arr+0));
    printf("\nptr notation =%d",*(arr+0));
    return 0;
}