#include<stdio.h>
#include<stdlib.h>
int main()
{
  int goals;
  printf("enter the numbers of goals scored against india");
  scanf("%d", &goals);
  if(goals <=5)
    goto sos;
    else
    {
        printf("about time soccer players learnt C\n");
        printf("and said goodbye! adieu to soccer\n");
        exit(1);
     }
          sos;
             printf("to err in human!\n");
             return 0;
  }
    
