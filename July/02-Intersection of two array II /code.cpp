
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        unordered_map<int, int> mp;
        
        // Populate the map with counts of each element in nums1
        for (auto x : nums1) {
            mp[x]++;
        }

        // Iterate through nums2 and find intersections
        for (int i = 0; i < nums2.size(); i++) {
            if (mp.find(nums2[i]) != mp.end() && mp[nums2[i]] > 0) {
                ans.push_back(nums2[i]);
                mp[nums2[i]]--;
                
                // Remove the element from the map if the count becomes zero
                if (mp[nums2[i]] == 0) {
                    mp.erase(nums2[i]);
                }
            }
        }
        return ans;
    }
};
// Also we have 2 pinter approach sort both the array int i=0 j=0 while i and j less then length of array if they eqyual store and move pinter then move pointer
