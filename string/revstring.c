/*Given a string , Reverse tht string and print*/
#include <stdio.h>
#include <string.h>

int main(){
    char str1[100],s;
    int i=0,j=0;
    fgets(str1,100,stdin);
    str1[strlen(str1)-1]='\0';
    int len=strlen(str1);
    printf("\nBefore reversing : %s",str1);
    printf("\n");
    for(i=0,j=len-1;i<=len/2,j>=len/2;i++,j--){
        s=str1[i];
        str1[i]=str1[j];
        str1[j]=s;
    }
    printf("\nAfter reversing : %s",str1);
}