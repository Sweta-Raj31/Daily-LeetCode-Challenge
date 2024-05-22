
class Solution {
public:
vector<vector<string>>ans;

bool palindrome(string s)
{
    int n=s.size()-1;
    int i=0;
    while(i<n)
    {
        if(s[i]!=s[n])
        {
            return false;
        }
        i++;
        n--;
    }
    return true;
}
void findAllPalindrome(string s, vector<string> temp)
{
    if(s.length()==0)
    {
        ans.push_back(temp);
        return;
    }
    for(int i=0;i<s.length();i++)
        {
            string firsthalf=s.substr(0,i+1);
            string secondhalf=s.substr(i+1);
            if(palindrome(firsthalf))
            {
                temp.push_back(firsthalf);
                findAllPalindrome(secondhalf,temp);
                temp.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<string>temp;
        findAllPalindrome(s,temp);

        return ans;

        
    }
};
