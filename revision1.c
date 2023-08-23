#include<stdio.h>
int main()
{
    int a[5],i;
    for(i=0;i<5;i++)
    {
        printf("Enter the number is: ");
        scanf("%d",&a[i]);
    }
    
    int skill=a[0];
    a[0]=a[5-1];
    a[5-1]=skill;

    for(i=0;i<5;i++)
    {
        printf("%d ",a[i]);
    }    
}