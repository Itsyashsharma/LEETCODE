class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        int n=s.size();
        string ans;
        priority_queue<pair<int,char>>maxh;
        for(int i=0;i<n;i++)
        {
            maxh.push({indices[i],s[i]});
        }
        while(maxh.size()!=0)
        {
            ans+=maxh.top().second;
            maxh.pop();
        }
        int k=ans.length();
        for(int i=0;i<k/2;i++)
        {
            swap(ans[i],ans[k-i-1]);
        }
        return ans;
    }
};