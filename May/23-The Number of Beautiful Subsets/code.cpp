
class Solution {
public: int ans=0;

void solve(int curr,int step,int n, vector<int>&nums,int k,vector<int>&cnt)
{
    if(step==n) ans++;
    else
    {
        solve(curr,step+1,n,nums,k,cnt);
        bool valid =true;
       for(int i=0;i<curr;i++)
       {
        if(abs(cnt[i]-nums[step])==k)
        {
            valid=false;
            break;
        }
       }
       if(valid)
       {
        cnt[curr]=nums[step];
        solve(curr+1,step+1,n,nums,k,cnt);
       }
    }
}
    int beautifulSubsets(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        vector<int>cnt(n);
        solve(0,0,n,nums,k,cnt);
        ans--;
        return ans;

        
    }
};
