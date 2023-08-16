#include <stdio.h>

int main()
{
    char name[20];
    int i;
    printf("\n Name : ");
    for(i=0;i<10;i++)
        name[i]=getc(stdin);
        name[i]='\0';
     // fgets(name, 1024,stdin);
        printf("\n%s", name);
    return 0;
}