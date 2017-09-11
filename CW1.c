#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<stdint.h>
#include <stdbool.h>

void randomarray(uint64_t size, uint64_t A[size], uint64_t B[size])
{
    for (uint64_t st = 0; st < size; st++)
    {
        A[st] = rand() % 100;
        B[st] = rand() % 100;
    }

}

void print(uint64_t size, uint64_t C[size])
{
    for (uint64_t st = 0; st < size; st++)
    {
        printf("%lu ", C[st]);
    }
    printf("\n\n");
}

uint64_t notincludeforA(uint64_t size, uint64_t A[size], uint64_t B[size], uint64_t C[size]) //ClassW1
{
    uint64_t sc = 0;
    for (uint64_t sa = 0; sa < size; sa++) //A
    {
        int i = false;
        for (uint64_t sb = 0; sb < size; sb++) //B
        {
            if (A[sa] == B[sb])
            {
                i == true;
                break;
            }
        }
        if (i == false)
        {
            uint64_t temp = 0;
            temp = A[sa];
            for (uint64_t st = 0; st < sc; st++)
            {
                if (temp == C[st])
                {
                    i == true;
                    break;
                }
            }
            if (i == false)
            {
                C[sc] = temp;
                sc++;
            }
        }
    }
}



int main()
{
    uint64_t size = 1;
    printf("Enter size\n");
    scanf("%lu", &size);
    uint64_t A[size];
    uint64_t B[size];
    srand(time(NULL));
    randomarray (size, A, B);
    uint64_t C[size];
    notincludeforA(size, A, B, C);
    print(size, C);
//    system("pause");
    return 0;
}