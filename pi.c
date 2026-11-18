#include <stdio.h>
#include <stdlib.h>
#define N 1000000
int main(void)
{
    long long inside = 0;
    for (long long i = 0; i < N; i++) {
        double x = (double)rand() / RAND_MAX;
        double y = (double)rand() / RAND_MAX;
        if (x * x + y * y <= 1.0)
            inside++;
    }
    printf("N = %lld, pi ≈ %f\n", N, 4.0 * inside / N);
    return 0;
}