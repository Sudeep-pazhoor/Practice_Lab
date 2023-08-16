/*write a program to scan all th char until Z is pressed and print all thecharacters you have scanned !*/

#include <stdio.h>

int main()
{
    char name[20];
    int i=0,j=0;
    printf("\n Name : \n");
    while(i,){ 
        name[i]=getc(stdin);
        if(name[i]=='Z'){
            break;
        }
        i++;
    }
    name[i++]='\0';
    printf("%s",name);
    puts(name);
    return 0;
}