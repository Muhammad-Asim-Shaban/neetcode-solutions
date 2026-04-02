class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> st;
        int n=operations.size();
        for(int i=0;i<n;i++)
        {
            if(operations[i]=="+")
            {
                int one=st.top();
                st.pop();
                int two=st.top();
                st.push(one);
                st.push(one+two);
            }
            else if(operations[i]=="D")
            {
                st.push(st.top()*2);
            }
            else if(operations[i]=="C")
            {
                st.pop();
            }
            else
            {
                int value=stoi(operations[i]);
                st.push(value);
            }
        }
        int ans=0;
        while(!st.empty())
        {
            ans+=st.top();
            st.pop();
        }
        return ans;
    }
};