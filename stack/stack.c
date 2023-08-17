#include <stdio.h>
#define MAX 5
int top=-1;
int bottom=-1;
int stack[MAX];
void push(int e);
void pop();
void display();

int main(){
    push(20);
    push(30);
    push(40);
    push(50);
    push(60);
    display();
    push(70);
    display();
    return 0;
}

void display(){
    int i;
    if(top == bottom){
        printf("\n stack is empty \n");
        return ;
    }
    printf("\nelements of stack are : \n");
    for(i=0;i<top+1;i++){
        printf("%d\n",stack[i]);
    }
}

void push(int e){
    if (top == MAX - 1){
        printf("stack full");
        return ;
    }
    else{
        ++top;
        stack[top]=e;
    }
}

void pop(){
    int e;
    if (top == bottom){
        printf("stack is empty");
        return ;
    }
    else{
        e=stack[top];
        top--;
        printf("%d elment has been popped out",e);
    }
}