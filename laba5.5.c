#include <math.h>
#include <stdio.h>
unsigned long long int recursion(unsigned long long int n, unsigned long long int a)
{
    return a ? recursion(n, a - 1) * n : 1;
}

unsigned long long int cycle(unsigned long long int n, unsigned long long int a)
{
    unsigned long long int i, result = 1;
    for(i = 0; i < a; i++)
        result *= n;
    return result;
}

int main()
{
    unsigned long long int n, a;
    printf("Основание степени-> ");
    scanf("%llu", &n);
    printf("Показатель степени -> ");
    scanf("%llu", &a);
    printf("Цикл: n! = %llu\n", cycle(n, a));
    printf("Рекурсия: n! = %llu\n", recursion(n, a));
    return 0;
}