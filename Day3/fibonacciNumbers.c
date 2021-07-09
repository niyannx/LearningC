// A program, in which you enter an integer and find out which number it corresponds to from the Fibonacci sequence.

int fib(int n)
{
    if (n <= 1)
    {
        return n;
    }
    return fib(n - 1) + fib(n - 2);
}

int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    printf("%d", fib(n));
    getchar();
    return 0;
}