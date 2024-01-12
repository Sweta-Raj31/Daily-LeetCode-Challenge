class Solution {
public:

bool isvowel(char x)
{
    if (x == 'a' || x == 'e' || x == 'i' || x == 'o'|| x == 'u' || x == 'A' || x == 'E' || x == 'I'|| x == 'O' || x == 'U')
      return true;

  return false;
}
    bool halvesAreAlike(string s) {
        
        int c1=0,c2=0;
        for(int i=0;i<(s.size())/2;i++)
        {
           if(isvowel(s[i]))
            c1++;
        }
        for(int i=(s.size())/2;i<s.size();i++)
        {
            if(isvowel(s[i]))
            c2++;
        }
        cout<<c1<<" "<<c2<<endl;
        return c1==c2;
        
    }
};
