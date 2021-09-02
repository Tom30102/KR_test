#include <stdio.h>

void main (void)
{
    int c, nl;

    nl = 0;

    while((c = getchar()) != EOF )
    {
        if(c == '\n' || c== ' ' || c == '\t')
        {
            ++nl;
        }
    }
    printf("%d\n",nl);

}

void stract (char s[], char t[])
{
    int i, j;
    i = j = 0;
    while(s[i] != '\0')
    {
        i++
    }
    while((s[i++] = t[j++]) != '\0')
    {
        ;
    }
}  