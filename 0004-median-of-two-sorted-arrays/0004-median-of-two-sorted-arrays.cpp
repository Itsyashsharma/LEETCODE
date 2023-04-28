class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        double ans =0;
        vector<int> arr;
        int b=nums2.size();
        arr=nums1;
        for(int i=0;i<b;i++){
            arr.push_back(nums2[i]);
        }
        sort(arr.begin(), arr.end());
        int mid = (arr.size()/2);
        if(arr.size()%2==0){
            ans = (arr[mid-1]+arr[mid])/2.0;
        }
        else{
            ans= arr[mid];
        }
        
        return ans;
    }
};