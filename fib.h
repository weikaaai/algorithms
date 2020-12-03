#include <stdlib.h>

int fib(int num)
{
    if(num < 0) return -1;
    if(num <= 1) return num;
    int *res = (int*)malloc((num + 1) * sizeof(int));
    res[0] = 0;
    res[1] = 1;
    for(int i = 2; i <= num; i++)
    {
        res[i] = res[i - 1] + res[i - 2];
    }
    return res[num];
}