
class Solution {
public:
    string makeGood(string s) 
    {
        stack<char>container;
        
        for(auto current : s)
        {
            // they are the same charater but in different cases
            if(!container.empty() && abs(current-container.top()) == 32)
                container.pop();
            else
                container.push(current);
        }
        int n = container.size();
        string ans(n,'.'); // "Us"
        int i = n-1;
        while(!container.empty())
        {
            ans[i] = container.top();
            container.pop();
            i--;
        }
        return ans;
    }
};
// B
// b 
