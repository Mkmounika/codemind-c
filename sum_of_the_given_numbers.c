#include<stdio.h>
int main()
{
    int n,arr[100],i,a,b,c;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d%d",&a,&b);
        c=a+b;
        printf("%d
",c);
    }
    return 0;
}