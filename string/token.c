#include <stdio.h>
#include <stdlib.h>
int main(){
    char line[1024]="This is.a.C.Programming.Class";
    char *token = (char *)malloc(1024);
    printf("\nLine: %s",line);
    toen = strtok(line);
    while(token != NULL){
        revString(token);
        if(countDots == 1){
            printf("%s.",token);
            countDots=0;
        }
        else{
            printf("%s",token);
        }
        token = strtok(NUL,".");
        if(token != NULL){
            countDots = 1;
        }
        printf("%s.",token);
        token= strtok(NULL,".");
    }
    printf("\n\n");

}