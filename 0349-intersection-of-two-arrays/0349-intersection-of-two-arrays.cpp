class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
    set<int> a;
    set<int> b;
    vector<int> ans;
    for(int i=0;i<nums1.size();i++){
       a.insert(nums1[i]); 
    }
    for(int j=0;j<nums2.size();j++){
        b.insert(nums2[j]);
    }
    for(auto it :b){
        if(a.find(it)!=a.end()){
            ans.push_back(it);
        }
    }

    return ans;
}

};