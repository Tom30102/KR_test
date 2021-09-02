#include <stdio.h>

#define TABSTOP 4
int getline_org(void);

int main(void)
{
    getline_org();
    return 0;
}

int getline_org(void)
{
    int c, i;
    extern char line[];

    for (i = 0; (c=getchar()) != EOF; i++ )
    {
        line[i] = c;
        if ( c == '\t')
        {
            while(i % TABSTOP != 0)
            {
                line[i] = ' ';
                i++;
            }
        }
    }
}