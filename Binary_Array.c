#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,arr[100],d=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]==0 || arr[i]==1)
        {
            d++;
        }
    }
    if(d==n)
    printf("True");
    else
    printf("False");
    
}