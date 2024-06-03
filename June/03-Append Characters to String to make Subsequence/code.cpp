
class Solution {
public:
    int appendCharacters(string s, string t) {
       
       int ns=s.size();
       int ts=t.size();
       int i=0;
       int j=0;
       for(i=0;i<ns;i++)
       {
        if(s[i]==t[j]) j++;
       }
       return ts-j;
        
    
    }
};
