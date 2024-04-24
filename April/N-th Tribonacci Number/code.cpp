
class Solution {
public:
/*  I have solved using the memorization but it is giving mle


int calculateTribonacci(int n,vector<int>memo)
{
        if(n==0) return 0;
        if(n==1) return 1;
        if(n==2) return 1;
        if(memo[n]!=-1) return memo[n];
        long long nthTerm=calculateTribonacci(n-1,memo)+calculateTribonacci(n-2,memo)+calculateTribonacci(n-3,memo);
        memo[n]=nthTerm;
        return nthTerm;

}
*/
    int tribonacci(int n) {
       
    //    vector<int>memo(n+1,-1);
    //     return calculateTribonacci(n,memo);
       int prev3 = 0;
        int prev2 = 1;
        int prev1 = 1;
        
        if(n == 0) return prev3;
        
        for(int index = 3; index <= n; index++)
        {
            int current = prev1 + prev2 + prev3;
            prev3 = prev2;
            prev2 = prev1;
            prev1 = current;
        }
        
        return prev1;
        
    }
};
