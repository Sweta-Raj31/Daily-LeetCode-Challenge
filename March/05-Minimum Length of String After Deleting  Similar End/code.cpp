
class Solution {
public:
    int minimumLength(string s) {
        int i=0;
        int j=s.size()-1;
        auto ch=0;
        while(i<j && s[i]==s[j])
        {
            ch=s[i];
            while(i<j && s[i]==ch)
            ++i;
            while(i<j && s[j]==ch)
            --j;
        }
        if(s[i]==ch) 
        {
            return 0;
        }
        return j-i+1;
    }
};
