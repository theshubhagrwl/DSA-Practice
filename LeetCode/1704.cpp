class Solution
{
public:
    bool halvesAreAlike(string s)
    {
        int first = 0, second = 0;
        for (int i = 0; i < s.length() / 2; i++)
        {
            if (isVowel(s[i]))
                first++;
        }
        for (int j = s.length() / 2; j < s.length(); j++)
        {
            if (isVowel(s[j]))
                second++;
        }
        if (first == second)
            return true;
        else
            return false;
    }
    bool isVowel(char c)
    {
        c = char(tolower(c));
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
            return true;
        else
            return false;
    }
};