#include<stdio.h>
#define n 5
int main()
{
    int a[n],i;

    for(i=0;i<n;i++)
    {
        printf("Enter the number is: ");
        scanf("%d",&a[i]);
    }
    
    int skill=a[0];
    for(i=0;i<n;i++)
    {
        a[i]=a[i+1];
    }
    a[n-1]=skill;

    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }    
}