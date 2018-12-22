#includee<stdio.h>
int main()
{
  int i=1,n,ctr=0;
  printf("enter a no.to check it is prime no or not\n");
  scanf("%d ",&n);
  for(i=1;i<=n;i++)
  {  
      if(n%i==0)
      ctr++1;
  }
          if(ctr==2)
          printf("%d is prime no.",n);
          return o;
 }         
