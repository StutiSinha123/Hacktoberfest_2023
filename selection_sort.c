#include <stdio.h>
int main()
{
    int n,k,min; 
    printf("Enter the value of n");
     scanf("%d",&n);
    int arr[n],temp;
    printf("Enter the data values");
    for(k=0;k<n;k++)
     scanf("%d",&arr[k]);
    for(int i=0;i<n-1;i++)
    {
        min=i;
        for(int j=i+1;j<n;j++)
    {
         if(arr[j]<arr[min])
         min=j;
    }
          temp=arr[i];
          arr[i]=arr[min];
          arr[min]=temp;
    }
     for(k=0;k<n;k++)
       printf("\t %d \t" ,arr[k]);
    return 0;
}

