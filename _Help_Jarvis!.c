#include<stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int n,te,r,arr[100],k=0,c,j,l,le=0;
        scanf("%d",&n);
        k=0;
        c=0;
        te=n;
        while(te)
        {
            r=te%10;
            le++;
            arr[k]=r;
            k++;
            te=te/10;
        }
        for(j=0;j<k;j++)
        {
            for(l=j+1;l<k;l++)
            {
                if(arr[j]>arr[l])
                {
                    te=arr[j];
                    arr[j]=arr[l];
                    arr[l]=te;
                }
            }
        }
        for(j=1;j<k;j++)
        {
            if(arr[j]-arr[j-1]==1)
            {
                c++;
            }
        }
        if(c==k-1)
        printf("YES
");
        else
        printf("NO
");
    }
}