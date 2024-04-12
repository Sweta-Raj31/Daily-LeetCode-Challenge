class Solution {
public:
    int trap(vector<int>& height) {
        int left=0;
        int right=height.size()-1;
        int leftmax=INT_MIN;
        int rightmax=INT_MIN;
        int ans=0;
        while(left<right)
        {
            leftmax=max(leftmax,height[left]);
            rightmax=max(rightmax,height[right]);
            ans+=(leftmax<rightmax)?leftmax-height[left++]:rightmax-height[right--];
        }
        return ans;

    }
};
