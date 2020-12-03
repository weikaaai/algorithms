int factorial(int num)
{
    if(num < 0) return -1;
    if(num <= 1) return 1;
    int res = 1;
    for(int i = 2; i <= num; i++)
    {
        res *= i;
    }
    return res;
}