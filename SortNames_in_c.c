#include<stdio.h>
#include<string.h>

void main()
{
    char names[6][10]={"frank","prank","garg","jagat","Aagar"};

    char temp[6];
    for(int i=0;i<5;i++)
    {
        for(int j=i+1;j<=5;j++){
            if(strcmp(names[i],names[j]) >0)
            {
                strcpy(temp,names[i]);
                strcpy(names[i],names[j]);
                strcpy(names[j],temp);
            }
        }
    }

    printf("Names in Sorted Form : ");
    for(int i=0;i<6;i++)
    {
        printf("%s \t ",names[i]);
    }
}