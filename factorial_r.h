int factorial_r(int num)
{
    if(num < 0) return -1;
    if(num <= 1) return 1;
    return factorial_r(num - 1) * num;
}