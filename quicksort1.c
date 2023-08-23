#include<stdio.h>
#define n 5
int f=-1,r=-1,i;
int a[n];
int display()

{
    for(i=f;i<=r;i++)
    {
        printf("%d ",a[i]);
    }
}
int insert(int val)
{
    
        if(r>=n-1)
        {
            printf("\n Array is full");
        }
    
else if(r<0)
    {
        f=r=0;
        a[r]=val;
    }
else
    {
        ++r;
        a[r]=val;
    }
}
int delete()
{
    if(f<0)
    {
        printf("Array is empty....\n");
    }

else if(f==r)
    {
        f=r=-1;
    }
else
    {
        ++f;
    }
}
int main() 
{
    int ch, value;
    

    do
     {
        printf("1. insert element\n");
        printf("2. delete element \n");
        printf("3. Display queue elements\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);

        switch (ch) 
        {
            case 1:
                printf("Enter the element to insert: ");
                scanf("%d", &value);
                insert(value);
                break;
            case 2:
                delete();
                break;
            case 3:
                display();
                 break;
             case 4:
                 break;
             default:
                 printf("Invalid choice. Try again.\n");
                 break;
        }
        
    }while (ch !=4);
}