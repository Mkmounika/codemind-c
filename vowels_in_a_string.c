#include<stdio.h>
#include<string.h>
int main()
{
    char str[100],ch;
    int i,f=0;
    scanf("%[^
]s",str);
    scanf("%s",&ch);
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
        {
            if(str[i]==ch)
            {
                f=1;
                break;
            }
        }
        
    }
    if(f==1)
    {
        printf("True
");
        printf("%d
",i);
    }
    else
    {
        printf("False");
    }
    
}