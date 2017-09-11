#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<stdint.h>

void randomarray(uint64_t size, uint64_t A[size])
{
    for (uint64_t st = 0; st < size; st++)
    {
        A[st] = rand() % 100;
    }
}

void max(uint64_t size, uint64_t A[size])
{
    uint64_t sc = 0;
    uint64_t sctemp = 0;
    uint64_t maxsum = 0;
    uint64_t sumtemp = 0;
    for (uint64_t sa = 0; sa < size; sa++)
    {
            if ((A[sa]%2) == 0)
            {
                sumtemp +=A[sa];
                sctemp++;
            }
            else if((A[sa]%2) !=0)
            {
                if (maxsum < sumtemp)
                {
                    maxsum = sumtemp;
                }
                if (sc < sctemp)
                {
                    sc = sctemp;
                }
                sumtemp = 0;
                sctemp = 0;
            }
    }
    printf("Maxsum:\n");
    printf("%lu\n", maxsum );
    printf("Maxlength:\n");
    printf("%lu", sc);
}


int main()
{
    uint64_t size = 1;
    printf("Введите размер\n");
    scanf("%lu", &size);
    uint64_t A[size];
    srand(time(NULL));
    randomarray (size, A);
    max(size, A);
    return 0;
}