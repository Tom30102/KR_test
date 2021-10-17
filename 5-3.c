#include<stdio.h>

void strcat_KR(char *s, char *t);

int main(void)
{
    char s[100];
    char t[100];

    printf("s:");
    scanf("%s",s);

    printf("t:");
    scanf("%s",t);

    printf("s:%s\tt:%s\n",s,t);

    strcat_KR(s,t);

    printf("s:%s\tt:%s\n",s,t);

    return 0;
}

void strcat_KR(char *s, char *t)
{
    int i,j;
    i = 0;
    j = 0;
    while(s[i] != '\0')
    {   
        i++;
    }
    while(t[j] != '\0')
    {   
        s[i] = t[j];
        i++;
        j++;
    }

    s[i] = '\0';
}