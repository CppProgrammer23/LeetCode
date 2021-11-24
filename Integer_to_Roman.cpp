std::string intToRoman(int num) 
{
    std::vector<std::pair<unsigned int, char const*>> roman {
     { 1000, "M" },{ 900, "CM" }, { 500, "D" },{ 400, "CD" },
     { 100, "C" },{ 90, "XC" }, { 50, "L" },{ 40, "XL" },
     { 10, "X" },{ 9, "IX" }, { 5, "V" },{ 4, "IV" }, { 1, "I" }};
    std::string result;
    for (auto const & k : roman) 
    {
       while (num >= k.first) 
       {
          result += k.second;
          num -= k.first;
        } 
     }
      return result;
}
