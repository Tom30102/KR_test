#include<stdio.h>

int strcat_KR(char *s, char *t);

int main(void)
{
    char s[100];
    char t[100];

    printf("s:");
    scanf("%s",s);

    printf("t:");
    scanf("%s",t);

    printf("s:%s\tt:%s\n",s,t);

    printf("%d",strcat_KR(s,t));

    return 0;
}

int strcat_KR(char *s, char *t)
{
    int ans = 0;
    int i,j;
    int k;
    i = 0;
    j = 0;
    k = 0;


    while(t[i] != '\0')
        i++;
    while(s[j] != '\0')
        j++;

    if(j < i){
        return ans;
    }
    while(s[j - i] != '\0')
    {
        if(s[j - i] == t[k])
        {
            ans = 1;
        }
        else{
            ans = 0;
        }
        j++;
        k++;
    }
    
    return ans;
}