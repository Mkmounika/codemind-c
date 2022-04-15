#include<stdio.h>
int main()
{
    int i,n,r,sum=0;
    scanf("%d",&n);
    i=n;
    while(n!=0)
    {
        r=n%10;
        n=n/10;
        sum=sum*10+r;
    }
    printf("%d",sum);
    return 0;
    
}