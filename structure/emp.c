#include <stdio.h>
#include <stdio.h>


typedef struct emp{
    int id;
    float sal;
    char name[20];
}EMP;

void getvalue(EMP *e);
void disvalue(EMP e);
void updatevalue(EMP e,float sal1);

void getvalue(EMP *e){
    scanf("%d%f%c",&e->id,&e->sal,&e->name);
}

void disvalue(EMP e){
    printf("%d%f%c",e.id,e.sal,e.name);
}

void updatevalue(EMP e,float sal1){
    e->sal=sal1;
}

void main(){
    float sal1;
    EMP EMP1;
    getvalue(EMP1);
    disvalue(EMP1);
    updatevalue(EMP1,sal1);
}