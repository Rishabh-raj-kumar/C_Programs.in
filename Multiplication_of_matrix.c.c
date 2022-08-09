#include<stdlib.h>
#include<stdio.h>
int main()
{
    int a[3][3];
    int b[3][3];
    printf("Enter the numbers of matrix.. \n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++){
        scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    printf("Enter the elements of matrix B... \n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
        scanf("%d",&b[i][j]);
        }
        printf("\n");
    }
    int k,sum=0,pro[3][3];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            for(k=0;k<3;k++){
            sum=sum+a[i][k]*b[k][j];
         }
         pro[i][j]=sum;
         sum=0;
        }
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d \t",pro[i][j]);
        }
        printf("\n");
    }
    return 0;
}