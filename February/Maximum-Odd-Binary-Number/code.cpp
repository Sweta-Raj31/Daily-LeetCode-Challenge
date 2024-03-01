
class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int c0=0;
        int c1=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='0')
            { 
                c0++;
            }
            
            else
            {
                c1++;
            }
        }
        // cout<<c0<<" "<<c1<<endl;
        string ans;
        for(int i=0;i<c1-1;i++)
        {
            ans.push_back('1');
        }
        // cout<<ans<<endl;
        for(int i=0;i<c0;i++)
        {
            ans.push_back('0');
        }
        ans.push_back('1');
        
      return ans;  
    }
};
