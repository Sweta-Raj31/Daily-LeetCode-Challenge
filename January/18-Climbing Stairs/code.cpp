
class Solution {
public:
    int totalWays(int currentIndex, int& n, vector<int>& memo) {
        if (currentIndex == n)
            return 1;
        if (currentIndex > n)
            return 0;
        if (memo[currentIndex] != -1)
            return memo[currentIndex];
        int oneStep = totalWays(currentIndex + 1, n, memo);
        int twoStep = totalWays(currentIndex + 2, n, memo);
        memo[currentIndex] = oneStep + twoStep;
        return memo[currentIndex];
    }
    int climbStairs(int n) {
 
    // now we will track the previous visited which be called backtracking
        vector<int> memo(n + 1, -1);
        return totalWays(0, n, memo);
    }
};



//Solving this problem using recursion 
 int climbStairs(int n) {

       //  this solution is using recursion which is giving tle but this is base of our solution from here be thought of storing the visted steps

        if(n==0 ||n==1)
         {
             return 1;

         }
       int ans=  climbStairs(n-1)+climbStairs(n-2);
       return ans;

       
