#include<stdio.h>
#include<time.h>

int binsearch(int x, int v[],int n);
int binsearch_single(int x, int v[],int n);

int main(void)
{
    int x;
    int v[20] ={2,3,5,7,11,13,17,23,29};
    int n = 8;
    int a;

    clock_t start_clock, end_clock;


    scanf("%d",&x);

    start_clock = clock();
    a = binsearch(x,v,n);
    end_clock = clock();

    printf("double_clock:%d\t",(double)(end_clock - start_clock));
    printf("ans %d\n",a);

    start_clock = clock();
    a = binsearch_single(x,v,n);
    end_clock = clock();
    printf("single_clock:%d\t",(double)(end_clock - start_clock));
    printf("ans %d\n",a);

    return 0;
}


int binsearch(int x, int v[],int n)
{
    int low, high, mid;
    int i;

    for(i=0; i< 1000000; i++){
        low = i;
    }

    low = 0;
    high = n - 1;
    while(low <= high)
    {
        mid = (low + high) / 2;
        if (x < v[mid])
        {
            high = mid -1;
        }
        else if(x > v[mid])
        {
            low = mid + 1;
        }
        else
        {
            return mid;
        }
    }
    return -1;
}

int binsearch_single(int x, int v[],int n)
{
    int low, high, mid;

    low = 0;
    high = n - 1;
    while(low <= high)
    {
        mid = (low + high) / 2;
        if (x < v[mid])
        {
            high = mid -1;
        }
        else
        {
            low = mid + 1;
        }
    }

    if(x == v[mid])
    {
        return mid;
    }
    else
    {
        return -1;
    }
}