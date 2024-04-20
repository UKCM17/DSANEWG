#include<stdio.h>
#include<string.h>


#define size 10

int isOverflow(int ub)
{
    if(ub==size)
        return 1;
    return 0;
}

int main()
{
    int a[size];
    int n;
    x:
    printf("\nEnter number of elements in array(Max size 10): ");
    scanf("%d",&n);
    if(n>size)
    {
        printf("\nMax size of array is 10. enter again....");
        goto x;
    }
    printf("\n Enter %d elements in sorted manner:",n);
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);   
    printf("\nArray is: ");
    for(int i=0;i<n;i++)
        printf("%d ",a[i]);
    int lb=0,ub=n-1;
    int element;
    printf("\nEnter an element to be insert in array: ");
    scanf("%d",&element);

    // if(a[lb]>element)

    int j;
    for(j=0;j<=ub;j++)
    {
        if(a[j]<=element)
            continue;
        else
            break;
    }
    ub++;
    // check overflow
    if(isOverflow(ub))
        printf("Array is full....");
    else
    {
        int i=ub;
        while(i>j)
        {   
            printf("\n%d\n",i);     
            a[i]=a[i-1];
            i--;
        }
        a[i]=element;
        printf("\nArray is: ");
        for(int i=0;i<=ub;i++)
            printf("%d ",a[i]);
    }
}