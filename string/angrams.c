/*
Q.Find if the given 2 strings are anagrams

ex: pine ,nipe are anagram
Hello lHelo*/
#include <stdio.h>
#include <string.h>

int main(){
    char str1[100],str2[100],s;
    int i=0,j=0,count=0;
    fgets(str1,100,stdin);
    fgets(str2,100,stdin);
    str1[strlen(str1)-1]='\0';
    str2[strlen(str2)-1]='\0';
    int len1=strlen(str1);
    int len2=strlen(str2);

    if(len1==len2){
        for(i=0;i<len1-1;i++){
            for(j=0;j<len1;j++){ 
                if(str1[i]<str1[j]){
                    s=str1[i];
                    str1[i]=str1[j];
                    str1[j]=s;
                }
            }
        }
        for(i=0;i<len1-1;i++){
            for(j=0;j<len1;j++){ 
                if(str2[i]<str2[j]){
                    s=str2[i];
                    str2[i]=str2[j];
                    str2[j]=s;
                }
            }
        }
            if(strcmp(str1,str2)==0){
            printf("\n angram ");
        }
    }
    printf("\n%s",str1);
}