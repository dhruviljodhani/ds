#include<stdio.h>
#include<stdlib.h>
#define n 8
int Top=-1,a[n],i;
int dis()
{
    printf("\n");
    if(Top < 0)
    {
        printf("Array is empty now....");
    }
    else
    {
        for(i=0;i<=Top;i++)
        {
            printf("%d ",a[i]);
        }
    }
}
int Push(int val)
{
    if(Top>=n-1)
    {
        printf("\n Array is full....");
    }
    else
    {
        ++Top;
        a[Top]=val;
    }
}
int Pop()
{
    if(Top<0)
    {
        printf("\n Array is already empty....");
    }
    else
    {
        --Top;
    }
}
int main()
{
    Push(10);
    Push(20);
    Push(30);
    Push(40);
    Push(50);
    dis();
    Pop();
    Pop();
    Pop();
    Pop();
    dis();
}