class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        int val=s.length();
        int val2=t.length();
        if(val!=val2)
        {
            return false;
        }
        for(int i=0;i<val;i++)
        {
            if(s[i]!=t[i])
            {
                return false;
            }
        }
        return true;
    }
};
