#include <stdio.h>

int a[20],i=0,n,j=0,flag=0;

int main(){
    scanf("%d",&n);
    for(j=0;j<n;j++){
        scanf("%d",&a[j]);
    }
    for(j=n-1;j>0;j--){
        flag=0;
        if(j==n-1){
            printf("%d",a[j]);
            continue;
        }
        for(i=j;i<n;i++){
            if(a[j]>a[i]){
                flag++;
            }
        }
        if(flag+j==n-1){
            printf("%d",a[j]);
        }
    }
}
