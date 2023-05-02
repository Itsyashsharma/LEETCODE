class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string ans="";
        char arr[indices.size()];
        int a =0;
        for(auto i:indices){
            arr[i]=s[a];
            a++;
        }
        for(auto c:arr){
            ans=ans+c;
        }
        return ans;
    }
};