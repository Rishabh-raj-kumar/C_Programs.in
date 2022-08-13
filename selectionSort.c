#include<stdio.h>

void main()
{
    int arr[5]={12,3,5,2,11};

    printf("The Given Array in data is : ");
    for(int i=0;i<5;i++)
    {
        printf("%d \t",arr[i]);
    }

    int min,pos=0;
    for(int i=0;i<=3;i++)
    {
        for(int j=i+1;j<=4;j++)
        {
            //if arr[0] > arr[1]...
            if(arr[i]>arr[j])
            {
                /* min will carry arr[1]
                   arr[1] wil carry arr[0]
                   arr[0] will carry arr[1]*/

                min=arr[j];
                //pos is set at 0..
                arr[j]=arr[pos];

                arr[pos]=min;
            }
        }
        pos++;
    }

    printf("\nData After Sorting is : ");
    for(int i=0;i<=4;i++)
    {
        printf("%d \t",arr[i]);
    }
}