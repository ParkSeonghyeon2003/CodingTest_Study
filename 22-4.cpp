int gcd(int a, int b)
{
    int r;
    int bigger = a >= b ? a : b;
    int smaller = a < b ? a : b;
    while (smaller != 0)
    {
        r = bigger % smaller;
        bigger = smaller;
        smaller = r;
    }
    return bigger;
}

int solution(int a, int b)
{
    int gcdV = gcd(a, b);
    int denom = b / gcdV;
    for (int i = 2; i <= denom; i++)
        if ((i % 2 != 0 && i % 5 != 0) && denom % i == 0) return 2;
    return 1;
}