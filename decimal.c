#include<stdio.h>
int main()
{
    int n,r,i=1,s=0;
    printf("enter a decimal no.\n");
    scanf("%d" ,&n);
    while(n>0)
 {
    r=n%2;
    n=n/2;
    s=s+r*i;
    i=i*10;
 }
   printf("\n%d" ,s);
   return 0;
 }  
