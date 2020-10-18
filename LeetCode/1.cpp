class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>ans;
        
        //Using simple iteration
        // ans.clear();
        // for(int i=0;i<nums.size();i++)
        // {
        //     for(int j=i+1;j<nums.size();j++)
        //     {
        //         if( nums[i] + nums[j]== target)
        //         {
        //             ans.push_back(i);
        //             ans.push_back(j);
        //             break;
        //         }
        //     }
        // }
        
        //Using Unordered Map
        unordered_map<int,int> hashMap;
        for(int i=0;i<nums.size();i++)
        {
            if(hashMap.find(target - nums[i]) != hashMap.end())
            {
                ans.push_back(i);
                ans.push_back(hashMap[target-nums[i]]);
                return ans;
            }
            else
                hashMap[nums[i]]=i;
        }
        return ans;
    }
};
