#include<stdio.h>
int main()
{
    int n,i,j,m,s=0,k=0,x,a[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        s=0;
        for(j=1;j<a[i];j++)
        {
            if(a[i]%j==0)
            {
                s++;
            }
        }
        if(s==1)
        {
            k++;
        }
    }
    printf("%d",k);
}