#include<stdio.h>
int main()
{
      int i,j=0,k=0;
      printf("enter the ending no.");
      scanf("%d",&i);
      for(; i>0;i--)
      {
            if(i%2==0)
            {
                j=j+i;
            }
                else
                {
                    k=k+i;
            }
                }
                   printf("sum of even no is %d\n",j);
                   printf("sumof odd no.is %d",k);
                   
                    
}
