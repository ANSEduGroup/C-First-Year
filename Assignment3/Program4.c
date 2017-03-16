#include <stdio.h>

int main()
{
    float m;
    int key;

    printf("Enter marks\n");
    scanf("%f",&m);
    key = m/10;
    printf("GRADE : ");

    switch(key)
    {
        case 10:
            printf("O");
            break;
        case 9:
            printf("O");
            break;
        case 8:
            printf("E");
            break;
        case 7:
            printf("A");
            break;
        case 6:
            printf("B");
            break;
        case 5:
            printf("C");
            break;
        case 4:
            printf("D");
            break;
        case 3:
            printf("F");
            break;
        case 2:
            printf("F");
            break;
        case 1:
            printf("F");
            break;
        case 0:
            printf("F");
            break;
        default:
            printf("WRONG INPUT");
            break;

    }
    return 0;
}
