#include <stdio.h>

int main (void)
{
    int M, N = 0;

    scanf("%i %i", &M, &N);

    int total = M * N;
    printf("%i", total / 2);
}