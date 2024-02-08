
class Solution {
public:
int numsSquareUsingRecursion(int n,vector<int>&memo)
{
        if(n<4) return n;
        if(memo[n]!=-1) return memo[n];
       int ans=INT_MAX;
       for (int i = 1; i * i <= n; i++) {
		int square = i * i;
		ans = min(ans, 1 + numsSquareUsingRecursion(n - square,memo));
        
	}
        return memo[n]=ans;
}
    int numSquares(int n) {
        vector<int>memo(n+1,-1);
        int ans=numsSquareUsingRecursion( n,memo);
        return ans;
    }
};
