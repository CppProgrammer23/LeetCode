int lengthOfLastWord(string s) 
{
    int nbr = 0;
    for(auto it = s.rbegin(); it != s.rend(); it++)
    {
        if(*it == 32 && nbr > 0)
            break;
        if(isalpha(*it))
            ++nbr;
    }
    return nbr;
}
