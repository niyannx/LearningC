int sumArr(int *arr, int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += *(arr + i);
    }
    return sum;
}

int main()
{
    int size = 5;
    int array[size], i;

    printf("Enter %d integers: \n", size);

    for (i = 0; i < size; i++)
    {
        scanf("%d", &array[i]);
    }

    int s = sumArr(s, size);
    printf("Sum = %d\n", s);
    return 0;
}