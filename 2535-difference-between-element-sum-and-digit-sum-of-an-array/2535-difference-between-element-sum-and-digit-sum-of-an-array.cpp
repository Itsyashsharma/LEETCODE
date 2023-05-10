class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int elementSum=0;
        int digitSum =0;
        for(int i=0;i<nums.size();i++){
            elementSum += nums[i];
            if(nums[i]>9){
                int a= nums[i];
                while(a>0){
                    digitSum = digitSum + (a%10);
                    a=a/10;
                }
            }
            else{
                digitSum+=nums[i];
            }
        }
        int ans =0;
        ans=abs(elementSum-digitSum);
        return ans;
    }
};