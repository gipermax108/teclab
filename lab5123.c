#include <stdio.h>

unsigned int fr(unsigned int n)
{
    return n ? fr(n - 1u) * n : 1u;
}

unsigned int fl(unsigned int n)
{
    unsigned int i, res = 1u;
    for (i = 2u; i <= n; i++)
        res *= i;
    return res;
}

int main ()
{
    unsigned int n;
    printf("Factorial of n\nn -> ");
    scanf("%u", &n);
    printf("Cycle: n! = %u\nRecursion: n! = %u\n", fl(n), fr(n));
    return 0;
}