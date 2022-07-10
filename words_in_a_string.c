#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i,words=0;
    scanf("%[^
]s",str);
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]==32)
         words++;
    }     
            if(i>0)
            {
                words++;
            }
    
    printf("%d",words);
}