class Solution {
public:
    int repeatedNTimes(vector<int>& nums)
    {
        map<int, int> count;
        for(int i=0; i<nums.size()/2+2; i++)
        {
            if(count[nums[i]] == 1) return nums[i];
            count[nums[i]]++;
        }
        return 0;
    }
};