int getNthFib(int n)
{
    if (n == 1)
    {
        return 0;
    }

    if (n == 2 || n == 3)
    {
        return 1;
    }

    return getNthFib(n - 1) + getNthFib(n - 2);
}
