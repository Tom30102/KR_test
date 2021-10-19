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
    
    printf("s:%p\tt:%p\n",&s,&t);

    while(*t != '\0'){
        t++;
        printf("s:%p\tt:%p\n",&s,&t);
    }
    while(*s != '\0'){
        s++;
    }

    printf("s:%p\tt:%p\n",&s,&t);

    // if((*s - s[0]) < (*t - t[0])){
    //     return ans;
    // }
    // while(*s - (*t - t[0]) != '\0')
    // {
    //     if(*s - (*t - t[0]) == t[0])
    //     {
    //         ans = 1;
    //     }
    //     else{
    //         ans = 0;
    //     }
    // }
    
    return ans;
}