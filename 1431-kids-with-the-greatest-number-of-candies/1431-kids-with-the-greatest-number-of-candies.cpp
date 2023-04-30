class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> ans;
        int mx=0;
        for(int a :candies){
            mx=max(mx,a);
        }
        for(int a:candies){
            if((a+extraCandies)>=mx){
                ans.push_back(true);
            }
            else{
                ans.push_back(false);
            }
        }
        return ans;
    }
};