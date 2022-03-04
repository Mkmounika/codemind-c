#include<stdio.h>
int main()
{
    int num,d,prod=1,sum=0;
    scanf("%d",&num);
    while(num)
    {
        d=num%10;
        num=num/10;
        sum+=d;
        prod=prod*d;
    }
    if(sum==prod)
    {
        printf("Spy Number");
    }
    else
    {
       printf("Not Spy Number"); 
    }
}