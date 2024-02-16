
class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        unordered_map<int,int>mp;
        for(auto x:arr)
        mp[x]++;
     int ans=0;
      vector<int>freq;
      for(auto x:mp)  
      freq.push_back(x.second);
      sort(freq.begin(),freq.end());
      for(int i=0;i<freq.size();i++)
      {
          if(k>=freq[i])
          {
             k=k-freq[i] ;
             freq[i]=-1;
          }
          if(freq[i]!=-1)
           ans++;
      }
      return ans;
        
    }
};
