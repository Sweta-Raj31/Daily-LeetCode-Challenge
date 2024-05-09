// #include <vector>
// #include <algorithm>

// class Solution {
// public:
//     long long maximumHappinessRecursive(std::vector<int>& happiness, int k, int index, std::vector<std::vector<long long>>& memo) {
//         // Base case: no more selections or children
//         if (k == 0 || index >= happiness.size()) {
//             return 0;
//         }

//         // Check if the result for this state is already computed
//         if (memo[index][k] != -1) {
//             return memo[index][k];
//         }

//         // Select current child and recurse
//         long long totalHappiness = happiness[index]; // Use original happiness for selection

//         // Adjust happiness of remaining children (avoid negative)
//         for (int i = index + 1; i < happiness.size(); ++i) {
//             happiness[i] = std::max(happiness[i] - 1, 0);
//         }

//         long long remainingHappiness = maximumHappinessRecursive(happiness, k - 1, index + 1, memo);

//         // Memoize the result and return
//         return memo[index][k] = totalHappiness + remainingHappiness;
//     }
    
    
//     long long maximumHappinessSum(std::vector<int>& happiness, int k) {
//         // Sort the happiness values in descending order
//         std::sort(happiness.begin(), happiness.end(), std::greater<int>());

//         // Initialize memoization table with -1
//         std::vector<std::vector<long long>> memo(happiness.size(), std::vector<long long>(k + 1, -1));

//         return maximumHappinessRecursive(happiness, k, 0, memo);
//     }
// };
#include <vector>
#include <algorithm>

#include <vector>
#include <algorithm>

#include <vector>
#include <algorithm>

class Solution {
public:
    long long maximumHappinessSum(std::vector<int>& happiness, int k) {
       
        sort(happiness.begin(), happiness.end());

        long long n = happiness.size();
       long long i=n-1;
        long long count=0;
        long long ans=0;
        while(k>0)
        {
            if(happiness[i]-count<0)
            {
                return ans;
            }
            ans+=happiness[i]-count;
            k--;
            count++;
            i--;
        }
   return ans;
       
    }
};


