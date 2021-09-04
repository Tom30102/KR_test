#include<stdio.h>

#define EXP2_5

void squeeze(char s1[], char s2[]);
int any(char s1[], char s2[]);


int main(void)
{

    char *s1 = "hello world";
    char s2[] = "w";
    int i;

    #ifdef EXP2_4
    squeeze(s1,s2);
    #endif //EXP2_4
    #ifdef EXP2_5
    i = any(s1,s2);
    printf("%d",i);
    #endif //EXP2_5

    return 0;
}
void squeeze(char s1[], char s2[])
{
    int i, j;
    int k = 0;
    int flag = 0;
    char ans_array[1024];

    for(i = j = 0; s1[i] != '\0' ; i++)
    {
        for(j = 0; s2[j] != '\0' ; j++)
        {
            if(s1[i] == s2[j])
            {
                puts("#");
                flag = 1;
                continue;
            }
        }
        if(flag == 0)
        {
            puts("&");
            ans_array[k] = s1[i];
            k++;
        }
        flag = 0;

        
    }

    printf("%s\n",ans_array);

}

int any(char s1[], char s2[])
{
    int i, j;
    int k = 0;

    for(i = j = 0; s1[i] != '\0' ; i++)
    {
        for(j = 0; s2[j] != '\0' ; j++)
        {
            if(s1[i] == s2[j])
            {
                return &s1[i];
            }
        }
    }

    return -1;
}