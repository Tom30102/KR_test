#include<stdio.h>

void expand(char *s1,char *s2);

int main (void)
{
    char s1[1024] = "n-z,a-z,g-";  
    char s2[1024] = "";

    expand(s1,s2);

    printf("%s",s2); 
}

void expand(char *s1,char *s2)
{
    int i,j;
    int k = 0;
    const char dictionary_lst[27] = { 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','\0'};
    for(i=0; s1[i] != '\0'; i++)
    {
        if(s1[i] == '-' && (s1[i+1] != '\0' || s1[i+1] != '-'))
        {
            k--;
            for(j=0; dictionary_lst[j] != '\0' ; j++)
            {
                if(s1[i-1] == dictionary_lst[j])
                {
                    do
                    {
                        s2[k] = dictionary_lst[j];
                        k++;
                        j++;
                    }while(s1[i+1] != dictionary_lst[j]);
                }
            }
        }
        else
        {
            s2[k] = s1[i];
            k++;
        }
    }

}