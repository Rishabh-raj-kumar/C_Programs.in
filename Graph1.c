#include<stdio.h>
#include<stdlib.h>

int main()
{
    int arr[5][5]={{0,1,1,1,0},
                   {1,0,1,0,1},
                   {1,1,0,1,1},
                   {1,0,1,0,1}};

   int i,j;
   int deg[5],sum=0;
   char vc[]="ABCDE";

   printf("adjancency Matrix  : \n");
   for( i=0;i<4;i++)
   {
    for(j=0;j<4;j++)
    {
        printf("%d ",arr[i][j]);
    }
    printf("\n");
   } 

   for(i=0;i<4;i++){
    int count =0;
    for(j=0;j<4;j++){
        if(arr[i][j] == 1)
        {
            count++;
        }
        deg[i]=count;
    }
   }

   printf("degree of each node : \n");
   for(i=0;i<4;i++)
   {
    printf("Vertices of %c Degree %d \n",vc[i],deg[i]);
    sum=sum+deg[i];
   }
   printf("\nNumber of edges = %d",sum/2);
   return 0;                   
}