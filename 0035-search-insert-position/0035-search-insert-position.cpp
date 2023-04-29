class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low=0;
        int high=nums.size();
        int mid= (low+high)/2;
        if(target>nums[high-1]){
            return high;
        }
        while(low<=high){
         if(target==nums[mid]){
            return mid;
        }
        if(target<nums[mid]){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
        mid=(low+high)/2;
        }
        return low;
    }
};