class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> mp;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            mp[nums[i]]=i;
        }
        for(int i=0;i<n;i++)
        {
            int value=target-nums[i];
            if(mp.find(value)!=mp.end()&&(mp[value]!=i))
            {
                return {i,mp[value]};
            }
        }
        return {};
    }
};
