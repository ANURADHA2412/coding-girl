#include<stdio.h>
int main()
{
    int i,j;
    int array[2][3]={{1,2,3},{3,4,5}};
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
        printf("%d\t" ,array[i][j]);
        }
        printf("\n");
    }
        return 0;
}


