#include<stdio.h>

void main()
{
    int arr[]={1,2,3,5,4,2,3,7,5,6,8,8,6};
    //take the length of array....using (sizeof())
    int length=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<length;i++)
    {
        //check for each number in array by using two loop..
        for(int j=i+1;j<=length;j++)
        {
            if(arr[i]==arr[j])
            {
                printf("%d \t",arr[j]);
            }
        }
    }

}