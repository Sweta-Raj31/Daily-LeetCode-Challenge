
class Solution {
public:
    int firstUniqChar(string s) {
        queue<char>q;
        int ans=-1;
        for(int i=0;i<s.size();i++)
        if(q.empty())
        {     ans=i;
            q.push(s[i]);
        }
        else
        {
            if(s[i]==q.front())
            {
                q.pop();

            }
              
        }
        return ans;
    }
};
