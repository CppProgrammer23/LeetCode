
uint32_t reverseBits(uint32_t n) 
{
    uint32_t init = 0;
    while(n)
    {
        init <<= 1;
        init |= n&1;
        n >>= 1;
    }
    return init;
}
