#include<stdio.h>
#include<string.h>
int main()
{
    int a=0,e=0,i=0,o=0,u=0;
    char str[20];
    printf("enter a string\n");
    fgets(str,20,stdin);
    l=strlen(str);
    for(j=0;j<=1;j++)
    {
        if(str[j]=='a'||str[j]=='A'
        a++;
        
      if(str[j]=='e' ||str[j]=='E'
     
        e++;
        
     else if(str[j]=='i' ||str[j]=='I'
      i++;
     else if(str[j]=='o' ||str[j]=='O'
     o++;
     else if(str[j]=='u' ||str[j]=='U'
     u++;
     }
        printf("frequency of vowels entered string\n a:%d\n e:%d\n i:%d\n o:%d\n u:%d\n a,e,i,o,u");
        return 0;
        
     }
     
    
