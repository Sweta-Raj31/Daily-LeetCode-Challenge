class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        map<int, int> mp;
        vector<int> v;
        int sum=0;
        for (auto x : nums) {
            mp[x]++;
        }
        for (auto x : mp) {
           sum+=x.first;
           if(x.second==2)
            v.push_back(x.first);
        }
        int n=nums.size();
        int total_sum=(n*(n+1))/2;
        
        cout << total_sum-sum << endl;
        v.push_back(total_sum-sum);
        return v;
    }
};
