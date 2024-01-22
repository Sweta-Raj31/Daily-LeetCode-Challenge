
// Explanation:
// 1. Create a map (`mp`) to store the frequency of each element in the input array.
// 2. Iterate through the input array and update the frequency in the map.
// 3. Iterate through the map to calculate the sum of unique elements and identify the repeated element (whose frequency is 2).
// 4. Calculate the total sum of numbers from 1 to n using the formula `(n * (n + 1)) / 2`.
// 5. Find the missing number by subtracting the sum of unique elements from the total sum.
// 6. Add the repeated and missing numbers to the result vector (`v`).

// Overall, your solution uses a map to efficiently calculate the frequency of each element and then uses mathematical 
//calculations to find the missing and repeated elements in the array.

class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        map<int, int> mp; // Use a map to store frequency of each element
        vector<int> v;
        int sum = 0;

        // Calculate frequency of each element in the input array
        for (auto x : nums) {
            mp[x]++;
        }

        // Iterate through the map
        for (auto x : mp) {
            sum += x.first; // Calculate the sum of unique elements
            if (x.second == 2)
                v.push_back(x.first); // Store the repeated element
        }

        int n = nums.size();
        int total_sum = (n * (n + 1)) / 2; // Calculate the total sum of numbers from 1 to n

        // Find the missing number and add it to the result vector
        v.push_back(total_sum - sum);

        return v;
    }
};
