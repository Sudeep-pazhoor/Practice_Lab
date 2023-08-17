#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct empDetails
{
	int id;
	int sal;
	char name[20];
}EMP,e1;

void printDetails(EMP);
void setDetails(EMP *e,int top);
void setDetails1(EMP *, int);
void updateDetails(EMP *e, char *Name);
void push();
char nName[30];
int top=-1;
int bottom=-1;
int n;
int MAX = 6;
e1 = (EMP *)malloc(sizeof(EMP)*n);
int main()
{
	EMP *e1;
	int i;
	scanf("%d",&n);
	// char nName[20];
	// for(i=0;i<3;i++)
	// 	setDetails(&e1[i]);
	setDetails1(e1,n);
	for(i=0;i<n;i++)
		printDetails(e1[i]);
	// printf("\nEnter New Name: ");
	// scanf("%s",nName);
	// updateDetails(&e1,nName);
	// printf("\nAfter Update new details are\n");
	// printDetails(e1);
	printf("\n\n");
	push();
	return 0;
}




void printDetails(EMP e)
{
	printf("\n=====Employee Details are====\n");
	printf("\nName: %s",e.name);
	printf("\nID: %d",e.id);
	printf("\nSalary: %d",e.sal);

}

void setDetails(EMP *e,int top)
{
	scanf("%d%d%s",&e[top].id,&e[top].sal,e[top].name);
}

void setDetails1(EMP *e, int n)
{
	int i;
	for(i=0;i<n;i++,e++){
		printf("\nDetails of %d Employee",(i+1));
		scanf("%d%d%s",&e->id,&e->sal,e->name);
	}
}

void updateDetails(EMP *e, char *Name)
{
	strcpy(e->name,nName);
	printf("\nUpdated the record\n");
}

void push(){
    if (top == MAX - 1){
        printf("stack full");
        return ;
    }
    else{
        ++top;
        e[top]=setDetails(e,top);
    }
}