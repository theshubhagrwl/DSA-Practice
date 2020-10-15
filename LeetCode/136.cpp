class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map <int,int> hashMap;
        for(auto it : nums)
        {
            hashMap[it]++;
        }
        for(auto itr : hashMap)
        {
            if(itr.second == 1)
                return itr.first;
        }
        return 0;
    }
};
