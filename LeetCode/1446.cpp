class Solution {
public:
    int maxPower(string s) {
        int max=-1;
        int temp=0;
        for(int i=0;i<s.length();i++)
        {
            while(s[i]==s[i+1])
            {
                temp++;
                i++;
            }
            if(temp > max)
                max= temp;
            temp=0;
        }
        max++;
        return max;
    }
};
