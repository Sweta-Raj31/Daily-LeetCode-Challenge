
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>mp;
        vector<vector<string>>ans;
        for(auto k:strs){
            string a=k;
            sort(k.begin(),k.end());
            mp[k].push_back(a);
        }
        for(auto& k:mp){
            ans.push_back(k.second);
        }
        return ans;
    }
};
