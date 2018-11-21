#include<stdio.h>
int main()
{
    int i,j;
    int array[2][3];
    printf("Enter the value of 2*3 matrix:\n ");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&array[i][j]);
        }
    }
    printf("Print 2*3 matrix:\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",array[i][j]);
        }
        printf("\n");
    }
    return 0;
}
