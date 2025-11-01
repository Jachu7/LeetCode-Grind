class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> zestaw = {nums1.begin(), nums1.end()};
        vector<int> inter = {};

        for(int i = 0; i < nums2.size(); i++) {
        if (zestaw.count(nums2[i]) > 0) {
            inter.push_back(nums2[i]);
            }
        }

        sort( inter.begin(), inter.end() );
        inter.erase( unique( inter.begin(), inter.end() ), inter.end() );

        return inter;
    }
};
