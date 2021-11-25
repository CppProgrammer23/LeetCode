//the simple method is much faster maybe some flags are not activated
void reverseString(vector<char>& s) 
{
    //reverse(s.begin(), s.end()); //-> 31ms
    char c;
    for(unsigned i = 0, j = s.size()-1; i<s.size()/2; j--, i++)
    {
        //swap(s[i], s[j]); //->28ms
        c = s[i];
        s[i] = s[j];
        s[j] = c;
    }
}
