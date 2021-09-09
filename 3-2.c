#include<stdio.h>

void escape(char *s, char *t);

int main(void)
{
    char s[1024] = {'i','n','t','\t','m','a','i','n', '\n','v','o','i','d','\0'};
    char t[1024] = "";

    int i;
    int j = 0;

    printf("%s\n",s);

    escape(s,t);

    return 0;
}

void escape(char *s, char *t)
{

    int i;
    int j = 0;

    for(i=0; s[i] != '\0'; i++)
    {
        switch(s[i])
        {
            case '\n':
                t[j] = '\\';
                j++;
                t[j] = 'n';
                break;
            case '\t':
                t[j] = '\\';
                j++;
                t[j] = 't';
                break;
            default:
                t[j] = s[i];
        }
        j++;
    }

    printf("%s",t);
}