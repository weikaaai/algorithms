int fib_r(int num)
{
    if(num < 0) return -1;
    if(num <= 1) return num;
    return fib_r(num - 1) + fib_r(num - 2);
}