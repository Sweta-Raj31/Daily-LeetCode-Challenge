
class Solution {
public:
    string replaceWords(vector<string>& dict, string s) {
        // declared a map and store the dict value so that serach time comes to o(1)
        unordered_map<string,int>mp;
        for(auto x:dict)mp[x]++;
        int n=s.size();
        //now will iterate through s whenenver found space we need single word just for the last 
        // word we should take condition that i<n that how we acces all words in s and serch in map 
        // found then replace else copy them of counter purpose we made flag word is replaced or not

        string ans="";
        for(int i=0;i<n;i++)
        {
            string word="";// for getting single word in sentence
            bool count=true;// if count became false menas word found in map and replaced and stored
            while(s[i]!=' ' && i<n)
            {
               word+=s[i];
               if(mp.count(word) && count)
               {
                count=false;
                ans+=word+" ";
               }
               i++;
            }
            if(count) ans+=word+" ";
        }
        // here in ans we will get the ans+" "so we have to return ans but not last char
        return ans.substr(0,ans.size()-1);
        
    }
};
