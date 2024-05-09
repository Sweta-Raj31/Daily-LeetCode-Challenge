
class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int len=score.size();
        vector<string>ans(len," ");
        priority_queue<pair<int,int>>pq; //elemment:index
        for(int i=0;i<len;i++)
        {
          pq.push({score[i],i});
        }
        int rank=1;
        while(!pq.empty())
        {
            int currentIndex=pq.top().second;
            pq.pop();
           if(rank == 1)
                ans[currentIndex] = "Gold Medal";
            
            else if(rank == 2)
                ans[currentIndex] = "Silver Medal";
            
            else if(rank == 3)
                ans[currentIndex] = "Bronze Medal";
            
            else
                ans[currentIndex] = to_string(rank);

                rank++;

        }
  return ans;
        
    }
};
