
class Solution {
public:
bool isPalindrome(string & words)
{
    int i=0;
    int j=words.size()-1;
    bool flag=false;
    while(i<=j)
    {
        if(words[i]!=words[j])
        {
          return false;
        }
        else
        {
            i++;j--;
        }
    }
    
      
     return true;
}
    string firstPalindrome(vector<string>& words) {
        for(int i=0;i<words.size();i++)
        {
            if(isPalindrome(words[i]))
              return words[i];
        }
        return "";
        
    }
};
