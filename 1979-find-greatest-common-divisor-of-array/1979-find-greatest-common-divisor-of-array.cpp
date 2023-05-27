class Solution {
public:

    int calculateGCD(int a, int b){
        if(a == 0)
            return b;
        if(b == 0)
            return a;
        if(a == b)
            return a;
        
        if(a > b)
            return calculateGCD(a-b, b);

        return calculateGCD(a, b-a);        
    }

    int findGCD(vector<int>& nums) {
        int ans;
        int n = nums.size();
        int smallNum = INT_MAX;
        int largeNum = INT_MIN;

        for(int i = 0; i<n; i++){
            if(nums[i] > largeNum)
                largeNum = nums[i];
            if(nums[i] < smallNum)
                smallNum = nums[i];
        }

        ans = calculateGCD(smallNum, largeNum);

        return ans;
    }
};