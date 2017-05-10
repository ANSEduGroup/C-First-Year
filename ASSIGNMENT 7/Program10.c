#include<stdio.h>
#include<string.h>
int main()
{

    int digit=0,vowel=0,blank=0,consonent=0;
    char str[50];
    int i;
    printf("enter any string-");
    gets(str);
    strupr(str);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]>=48&&str[i]<=57)
        digit++;
        else if(str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
        vowel++;
        else if(str[i]==' ')
        blank++;
        else
        consonent++;
    }
 printf("vowels=%d",vowel);
 printf("\nconsonents=%d",consonent);
 printf("\ndigits=%d",digit);
 printf("\nblank=%d",blank);
 return 0;
 }

