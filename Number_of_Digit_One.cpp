int countDigitOne(int n) 
{
    int c = 0;
    for (long long i = 1; i <= n; i *= 10) 
    {
      long long d = i * 10;
      c += (n / dr) * i + min(max(n % d - i + 1, 0LL), i);
    }
    return c;
}
