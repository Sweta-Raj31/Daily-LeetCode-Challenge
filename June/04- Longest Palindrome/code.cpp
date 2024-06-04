
class Solution {
public:

    int longestPalindrome(string s) {
        
        unordered_map<char,int>mp;
        int ans=0; int one=0;
        for(auto x:s)
         mp[x]++;

        for(auto x:mp)
        {
            if(x.second>1)
            ans=ans+(x.second/2)*2;
             if(x.second%2) //we can do this or add 1 to the answer 
             //for middle odd element but keep in mind that we can have odd number lengthstring also always adding 1 doesn
             //t work
              one=1;

        }
        return ans+one;
    }
};
