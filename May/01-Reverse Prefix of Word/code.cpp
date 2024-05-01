
class Solution {
public:
    string reversePrefix(string word, char ch) {
        int j=0;
        for(int i=0;i<word.size();i++)
        {
            if(word[i]==ch)
            {
                j=i;
                break;
            }
        }
        //cout<<j;
        string s;
        for(int i=0;i<=j;i++)
        {
            s.push_back(word[i]);
        }
       
        
        reverse(s.begin(),s.end());
        // cout<<s;
        for(int i=j+1;i<=word.size()-1;i++)
        {
           s.push_back(word[i]);
        }
        return s;
        
    }
};
