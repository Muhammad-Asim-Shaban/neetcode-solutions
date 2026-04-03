class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int> mp;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            mp[nums[i]]++;
        }
        vector<pair<int,int>> val;
        for(auto &e:mp)
        {
            val.push_back({e.second,e.first});
        }
        sort(val.begin(),val.end(),greater<pair<int,int>>());
        vector<int> ans;
        for(int i=0;i<k;i++)
        {
            ans.push_back(val[i].second);
        }
        return ans;
    }
};
