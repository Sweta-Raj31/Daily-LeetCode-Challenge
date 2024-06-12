
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int i=0;
        int start=0;
        int end=nums.size()-1;
        while(i<=end)
        {
            if(nums[i]==0)
            {
                swap(nums[i],nums[start]);
                i++;
                start++;
            }
            else if(nums[i]==1)
            {
                i++;
            }
            else
            {
                swap(nums[i],nums[end]);
                 end--;
            }
        }
        
    }
};
