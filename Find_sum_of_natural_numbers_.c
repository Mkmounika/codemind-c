#include<stdio.h>
int main()
{
    int i,n,sum;
    scanf("%d",&n);
    sum=n*(n+1)/2;
    for(i=0;i<=n;i++)
    {
        printf("%d",sum);
        break;
    }
}