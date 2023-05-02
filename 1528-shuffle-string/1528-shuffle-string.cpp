class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
     //for assigning length of ans string we put the string s in the ans string.
       string ans=s;
        for(int i=0;i<s.length();i++)
        {
            ans[indices[i]]=s[i];
        }
        return ans;
    }
};