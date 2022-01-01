int divide(int dividend, int divisor) 
{
    if(dividend == INT_MIN && divisor == 1)
        return INT_MIN;
    else if(dividend == INT_MIN && divisor == -1)
        return INT_MAX;
    return round(dividend/divisor);
}
