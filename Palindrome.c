#include<stdio.h>
int main()
{
    int i,n,d,sum=0,temp;
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        d=n%10;
        n=n/10;
        sum=sum*10+d;
    }
    if(temp==sum)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}