#include <stdio.h>

int main(){
    char ch='y';
    do{
        int i,sum1=1,a;
        printf("\n sum of sequence with alternative + and - of squares \n ");
        printf("\nenter the number of times :");
        scanf("%d",&a);
        for(i=2;i<=a;i++){
            if(i%2==0){
                sum1+=(i*i);
            }
            else{
                sum1-=(i*i);
            }
        }
        printf("The sum of the sequenece is %d",sum1);
        printf("\n");
        printf("\n\nDo you want to continue: (y/n):");
        scanf("%s",&ch);
        printf("\n");
    }while(ch=='y');
}
	
