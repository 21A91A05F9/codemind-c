#include<stdio.h>
int main()
{
    int i,j,r,c,arr[1000][1000],max=-9999,s=0,s1=0,max1=-999;
    scanf("%d%d",&r,&c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(j=0;j<c;j++)
    {s=0;
        for(i=0;i<r;i++)
        {
            s=s+arr[i][j];
        }
        if(s>max)
        {
            max=s;
        }
    }
    for(i=0;i<r;i++)
    {s1=0;
        for(j=0;j<c;j++)
        {
            s1=s1+arr[i][j];
        }
        if(s1>max1)
        {
            max1=s1;
        }
    }
    if(max>max1)
    printf("%d",max);
    else 
    printf("%d",max1);
}