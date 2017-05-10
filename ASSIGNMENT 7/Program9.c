#include<stdio.h>
#include<string.h>

int main()
{
    char ar[10];
    char ar1[10];
    int i,j,v;
    printf("enter a string");
    gets(ar);
    for(i=0;ar[i]!='\0';i++)
    {
        ar1[j]=ar[i];
    }
    ar1[j]='\0';
    v=strcmp(ar,ar1);
    if(v==0)
    printf("palindrome");
    else
    printf("not palindrome");
return 0;
}
