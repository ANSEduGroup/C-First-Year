#include<stdio.h>
int main()
{
    char str[10];
    char str1[10];
    int i;
    i=0;
    printf("enter string 1-");
    gets(str);
    printf("enter string 2-");
    gets(str1);
    while((str[i]==str1[i])&&str[i]!='\0'&&str1[i]!='\0')
    {
        i++;
    }
    if(str[i]=='\0'&&str1[i]=='\0')
    printf("same string");
    else
    printf("not same");
return 0;
}
