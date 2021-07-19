#include <stdio.h>

void linear_search(int arr[], int n, int val)
{
    int ind = -1;
    for(int i=0;i<n;i++)
    {
        if(arr[i] == val)
        {
            ind = i;
            break;
        }
    }
    if(ind != -1)
    {
        printf("The value has been found !");
        printf("Value located at index : %d",ind);
    }
    else
    {
        printf("Value does not exist in the entered array");
    }
}

int main()
{
    int n,val;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter value to be searched : ");
    scanf("%d",&val);
    linear_search(arr,n,val);
}