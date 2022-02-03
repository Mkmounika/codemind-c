#include<stdio.h>
int main()
{
    int L,B,W,C,A,total_cost;
    scanf("%d%d%d%d",&L,&B,&W,&C);
    A=((L+2*W)*(B+2*W))-L*B;
    total_cost=A*C;
    printf("%d",total_cost);
}