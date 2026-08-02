int countPrimes(int n) 
{
      if (n <= 2)
        return 0;

    bool *isPrime = (bool *)malloc(n * sizeof(bool));

    // Assume all numbers are prime initially
    for (int i = 0; i < n; i++)
        isPrime[i] = true;

    isPrime[0] = false;
    isPrime[1] = false;

    // Mark multiples of each prime as non-prime
    for (int i = 2; i * i < n; i++)
    {
        if (isPrime[i])
        {
            for (int j = i * i; j < n; j += i)
            {
                isPrime[j] = false;
            }
        }
    }

    // Count remaining prime numbers
    int count = 0;
    for (int i = 2; i < n; i++)
    {
        if (isPrime[i])
            count++;
    }

    free(isPrime);
    return count;

}