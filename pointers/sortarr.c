/*Given a sorted array A, size N, of integers; every element
appears twice except for one. Find that element in linear
time complexity and without using extra memory

Input:
7
7 3 5 4 5 3 4
Ouput:
7*/

#include <stdio.h>

int main(){
    int A[30],N=0,i=0,j=0;
    printf("Input:");
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        scanf("%d",&A[i]);
    }
    for(i=0;i<N;i++){
            int num=0;
            for(j=i;j<N;j++){
                if(A[i]==A[j]){
                    num++;
                }
                if(num<1){
                    printf("\n%d",A[i]);
                }
            }
    }


}