class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        if (nums2.size() < nums1.size())
        {
            return findMedianSortedArrays(nums2, nums1);
        }
        int total = nums1.size() + nums2.size() + 1;
        int left = (total) / 2;
        int l = 0 , h = nums1.size();

        while(l <= h)
        {
            int m = l + (h - l) / 2;
            int n1 = m , n2 = left - m;
            int l1 = n1 == 0 ? INT_MIN : nums1[n1-1];
            int l2 = n2 == 0 ? INT_MIN : nums2[n2-1];
            int r1 = n1 == nums1.size() ? INT_MAX : nums1[n1];
            int r2 = n2 == nums2.size() ? INT_MAX : nums2[n2];

            if(l1 <= r2 && l2 <= r1)
            {
                double median;
                if((nums1.size() + nums2.size()) % 2 == 0)
                {
                    median = (max(l1,l2) + min(r1,r2))/2.0;
                }
                else
                {
                    median = max(l1,l2);
                }
                return median;
            }
            else if(l1 > r2)
            {
                h = m - 1;
            }
            else
            {
                l = m + 1;
            }
        }
        return -1;
    }
};