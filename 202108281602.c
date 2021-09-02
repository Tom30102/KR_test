#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

void main(void)
{
    int fahr;
    
    printf("C - F Convert\n");
    // while (fahr <= upper)
    // {
    //     celsius = ((fahr * 9) / 5) +32;
    //     printf("%d\t%d\n",fahr, celsius);
    //     fahr = fahr + step;
    // }
    for(fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
    {
        printf("%3d %6.1f\n",fahr ,(5.0/9.0) * (fahr-32));
    }

}