
class Solution {
public:
void generateAllSubset(int currentIndex,vector<int>&currentAns,vector<vector<int>>&ans,vector<int>& nums ){

    if(currentIndex==nums.size())
    {
       ans.push_back(currentAns);
       return;
    }
    // take
    currentAns.push_back(nums[currentIndex]);
    generateAllSubset(currentIndex+1,currentAns,ans,nums);

    //undo
    currentAns.pop_back();


    //not take
    generateAllSubset(currentIndex+1,currentAns,ans,nums);
}

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>currentAns;
        generateAllSubset(0,currentAns,ans,nums);
        return ans;
        
    }
};
