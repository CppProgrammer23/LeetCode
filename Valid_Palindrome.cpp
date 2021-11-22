#include <algorithm>
#include <cctype>
//don't include them

bool isPalindrome(string s) 
{
    s.erase(remove_if(s.begin(), s.end(), [](const char& i){return !isalpha(i) && !isdigit(i);}), s.end());
    for_each(s.begin(), s.end(), [](char & c){c = toupper(c);});
    string str = s;
    if(reverse(s.begin(), s.end()), s == str)
        return true;
    return false;
}
