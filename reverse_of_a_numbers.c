#include<stdio.h>
int main()
{
    int n;
    int dig,revNumber;
    scanf("%d",&n);
    revNumber=0;
    while(n>0)
    {
        dig=n%10;
        revNumber=(revNumber*10)+dig;
        n=n/10;
    }
    printf("%d
",revNumber);
    return 0;
}