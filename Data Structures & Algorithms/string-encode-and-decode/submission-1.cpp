class Solution {
public:

    string encode(vector<string>& strs) {
        string ret;
        for(auto &str:strs)
        {
            ret+=to_string(str.length());
            ret+='#';
            ret+=str;
        }
        return ret;
    }

    vector<string> decode(string s) {
        vector<string> ret;
        int i=0;
        int n=s.length();
        while(i<n)
        {
            int j=i;
            while(s[j]!='#')
            {
                j++;
            }
            int len=stoi(s.substr(i,j-i));
            j++;
            string word=s.substr(j,len);
            ret.push_back(word);
            i=j+len;
        }
        return ret;
    }
};
