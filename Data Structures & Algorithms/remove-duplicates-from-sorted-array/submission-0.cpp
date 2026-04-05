class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> st(nums.begin(),nums.end());
        int s=0;
        for(int value: st)
        {
            nums[s++]=value;
        }   
        return st.size();
    }
};