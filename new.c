#include<stdio.h>
int getDigit(int num)
{
    int countDigits =0;
    int countPFlag=0;
    while(num>0)
   {
     r=num%10;
     countDigits++;
     if(isPrime(r)==0)
     {
          countPFlag++;
     }
     num /=10;
   } 
   if (countPFlag == countDigits)
     return 1;
   else
     return 0;

}