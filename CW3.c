#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<stdint.h>
#include <stdbool.h>

void randomarray(uint64_t size, uint64_t A[size])
{
    for (uint64_t st = 0; st < size; st++)
    {
        A[st] = rand() % 100;
    }

}

uint64_t deleted(uint64_t size, uint64_t A[size],  uint64_t C[size], uint64_t number)
{
    uint64_t sc = 0;
    for (uint64_t sa = 0; sa < size; sa++) //AinB
    {
        if (number == 1)
        {
            if ((A[sa]%2) == 0)
            {
                C[sc] = A[sa];
                sc++;
            }
        }
        else if (number == 2)
        {
            if ((A[sa]%2) != 0)
            {
                C[sc] = A[sa];
                sc++;
            }
        }
    }
    for (uint64_t st = 0; st < sc; st++)
    {
        printf("%lu ", C[st]);
    }
    printf("\n\n");
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
    printf("Удалить четные(2), удалить нечетные(1)\n");
    uint64_t number = 0;
    scanf("%lu", &number);
    uint64_t C[size];
    deleted(size, A, C, number);
    return 0;
}