/*Using dynamic array, reverse the elements of the array.

Input
7
1 2 3 4 5 6 7
output
7 6 5 4 3 2 1*/

/*
Program to store and sort the elements of dynamic array
*/

#include <stdio.h>
#include <stdlib.h>


void StoreElems(int *ptr,int size);
void dispElems(int *ptr,int size);
void SortElems(int *ptr,int size);

void StoreElems(int *ptr,int size){
    for(int i=0;i<size;i++){
        scanf("%d",ptr++);// pre increment
    }
    printf("\n");
}
void dispElems(int *ptr,int size){ 
    for(int i=0;i<size;i++){
        printf("%d ",*ptr++);// pre increment
    }
}
void SortElems(int *ptr,int size){
    int temp,i,j;
    for(int i=0,j=size-1;i<(size-1)/2;i++,j--){
            temp=*(ptr+i);
            *(ptr+i)=*(ptr+j);
            *(ptr+j)=temp;
    }
}
int main(){
    int *ptr=NULL,size,temp;
    scanf("%d",&size);
    ptr = (int *)malloc(sizeof(int)*size);
    StoreElems(ptr,size);
    SortElems(ptr,size);
    dispElems(ptr,size);
}