#include<stdio.h>

//ASCII -32

int main(void)
{
    char c;

    scanf("%c",&c);

    if(c > 64 && c < 97)
    {
        c = c + 32;
    }

    printf("%c",c);

    return 0;
}