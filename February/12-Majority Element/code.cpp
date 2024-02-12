
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> a;
        for(int i:nums)
            a[i]++;
        int maxval=nums[0];
        for(auto x:a)
        {
            if(x.second>a[maxval])
                maxval=x.first;
        }
        return maxval;
    }
};
