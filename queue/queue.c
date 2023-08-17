#include <stdio.h>
int queue[30],front=-1,max=5,rear=-1;
void enqueue();
void dequeue();
void display();

int main(){
    enqueue(20);
    enqueue(40);
    enqueue(30);
    enqueue(50);
    enqueue(60);
    display();
    enqueue(70);
    display();
}

void enqueue(int a){
    if(rear==max-1){ 
        printf("\nqueue is full ");
    }
    else{ 
        rear++;
        printf("\n%d is entered into the queue",a);
        queue[rear]=a;
    }
}
void dequeue(){
    if(front==rear){ 
        printf("\nqueue is full/empty ");
    }
    else{ 
        front++;
        printf("\ndequeue element is %d ",queue[front]);
    }
}
void display(){
    int i;
    if(front == rear){
        printf("\n queue is empty \n");
        return ;
    }
    printf("\nelements of queue are : \n");
    for(i=front+1;i<rear+1;i++){
        printf("%d\n",queue[i]);
    }

}


