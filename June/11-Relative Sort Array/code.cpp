
class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int> ans;
        unordered_map<int, int>mp;
        for(int ele : arr1) mp[ele]++;
        for(int ele : arr2){
            auto itr = mp.find(ele);
            ans.insert(ans.end(), itr->second, itr->first);
            itr->second = 0;
        }
        int size = ans.size();
        
        for(auto ele : mp){
            if(ele.second > 0){
                ans.insert(ans.end(), ele.second, ele.first);
            }
        }
        sort(ans.begin()+size,ans.end());

        return ans;
    }
};
