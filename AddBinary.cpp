#include <algorithm>
#include <string>

string addBinary(string a, string b) 
    {
        bool carier{};
        string output;
        reverse(a.begin(), a.end());
        reverse(b.begin(), b.end());
        if(a.size()>b.size())
        {
            for(size_t o = b.size(); o < a.size(); o++)
                b+='0';
        }
        else
        {
            for(size_t o = a.size(); o < b.size(); o++)
                a+='0';
        }
        for(auto i = 0; i < a.size();i++)
        {
            if((carier && a[i]+b[i] == 98) || (!carier && a[i]+b[i] == 97))
            {
                output+='1';
            }
            else if(!carier && a[i]+b[i] == 98)
            {
                output+='0';
                carier=true;
            }
            else if((carier && a[i]+b[i] == 97) || (!carier && a[i]+b[i] == 96))
            {
                output+='0';
            }
            else if (carier && a[i]+b[i] == 96)
            {
                output+='1';
                carier =false;
            }
        }
        if(carier)
            output += '1';
        reverse(output.begin(), output.end());
        return output;
    }
