#include<stdio.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);
    if(n<3 || n>100)
    {
        printf("The pattern is not possible");
        return 0;
    }
    for(i=1;i<n;i++)
    {
        for(j=i;j>=1;j--)
        {
            printf("*");
        }
        printf("
");
    }
    for(i=1;i<=n;i++)
    {
        for(j=i;j<=n;j++)
        {
            printf("*");
        }
        printf("
");
    }
    return 0;
}