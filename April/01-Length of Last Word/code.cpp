
Length of Last Word
class Solution {
public:
    int lengthOfLastWord(string s) {
        int n=s.length()-1;
        int index=0;
        for(int i=n;i>=0;i--)
        {
            if(s[i]!=' ')
            {
                index++;
            }
            else if(index>0)
            {
                return index;
            }
        }
        return index;
    }
};
