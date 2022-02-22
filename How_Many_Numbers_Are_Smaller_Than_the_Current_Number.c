#include<stdio.h>
#include<math.h>
int main()
{
    int a[20],i,j,n,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
       scanf("%d",&a[i]); 
    }
    for(i=0;i<n;i++)
    {   c=0;
        for(j=0;j<n;j++)
        {
            if(a[j]<a[i])
            c++;
        }
        printf("%d ",c);
    }
}