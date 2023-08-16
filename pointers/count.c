/*
Given an array A of positive integers. Count number of smaller elements on right side of each array.

Input Format:
First line contains N as integer.
Second line contains N no of elements of type integer.

Output Format:

Constratins:
2<=N<=100

Sample Input:
5
5 4 3 2 1
Sample Output:
4 3 2 1 0

*/
#include <stdio.h>
#include <stdlib.h>
int main(){
    int a[30],n,i=0,j=0;
    scanf("%d",&n);
    printf("\nSample Input:\n");
    if(2<=n<=100){
        for(i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
        printf("\nSample Output:\n");
        for(i=0;i<n;i++){
            int num=0;
            for(j=i;j<n;j++){
                if(a[i]>a[j]){
                    num++;
                }
            }
            printf("%d ",num);
        }
    }
    else{
        printf("\nINVALID");
    }
}