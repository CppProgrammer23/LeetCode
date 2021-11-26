bool detectCapitalUse(string word) 
{
    int nbr = 0;
    if(word[0]>64 && word[0]<91)
    {
        nbr++;
        for(auto i = 1; i < word.size(); i++)
        {
            if(word[i]>64 && word[i]<91)
                nbr++;
        }
    }
    const int j = count_if(word.begin(), word.end(), [](const char& c){
        return c>96 && c<123;}
    );
    if(j==word.size() || nbr == 1 || nbr == word.size())
        return true;
    else
        return false;
}
