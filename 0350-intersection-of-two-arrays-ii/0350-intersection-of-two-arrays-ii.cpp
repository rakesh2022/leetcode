class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_multiset<int>st(nums1.begin(),nums1.end());
        vector<int>res;
        for(int i=0;i<nums2.size();i++){
            auto it=st.find(nums2[i]);
            if(it==st.end())continue;
            res.push_back(*it);
            st.erase(it);
        }
        return res;
    }
};