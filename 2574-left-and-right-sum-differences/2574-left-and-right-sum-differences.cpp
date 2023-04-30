class Solution {
public:
    vector<int> leftRigthDifference(vector<int>& nums) {
        vector<int> left;
        vector<int> right;
        vector<int> ans1;
        left.push_back(0);
        int ans=0;
        int ans2=0;
        for(int i=0;i<nums.size()-1;i++){
            ans=ans+nums[i];
            left.push_back(ans);
        }
        for(int i=nums.size()-1;i>0;i--){
            ans2=ans2+nums[i];
            right.push_back(ans2);
        }
        reverse(right.begin(),right.end());
        right.push_back(0);
        
        for(int i=0;i<left.size();i++){
           ans1.push_back(abs(left[i]-right[i])); 
        }
        return ans1;
        
    }
};