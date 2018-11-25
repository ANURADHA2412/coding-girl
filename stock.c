#include<stdio.h>
int main()
{
   int n,a ,stock;
   printf("enter the no. of items that customer want");
   scanf("%d ,&n);
   printf("enter the stock abvailable");
   scanf("%d" ,&a);
   if (n==a)
   stock =0;
   else
   if(n<a)
   stock=a-n;
   else
        if (n>a)
        stock=0;
        printf("the stock of the shop is %d , stock);
        return 0;
        }
   
