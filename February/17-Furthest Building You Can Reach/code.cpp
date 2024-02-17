
class Solution {
public:
int furthestBuildingSolve(vector<int>& heights, int bricks, int ladders,int index,vector<vector<vector<int>>>&memo) 
{  
   if(index==heights.size()-1) return 0;
   if(bricks==0 && ladders==0 && heights[index+1]>heights[index]) return 0;
   if(memo[bricks][ladders][index]!=-1) return memo[bricks][ladders][index];
   // when next buliding is smaller
   if(heights[index]>=heights[index+1])
   {
    return 1+furthestBuildingSolve(heights,bricks,ladders,index+1,memo);
   }
   //larger either by bricks or ladder
   int byBricks=0;
   int byLadder=0;
   if(heights[index+1]-heights[index]<=bricks)
   {
    byBricks=1+furthestBuildingSolve(heights,bricks-(heights[index+1]-heights[index]),ladders,index+1,memo);
   }
   if(ladders>0)
   {
        byLadder = 1 + furthestBuildingSolve(heights, bricks, ladders-1, index+1,memo);
   }
   memo[bricks][ladders][index]=max(byBricks,byLadder);
   return memo[bricks][ladders][index];
  

}
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
    int index=0;
    vector<vector<vector<int>>>memo(bricks+1,vector<vector<int>>(ladders+1,vector<int>(heights.size()+1,-1)));
     int ans=furthestBuildingSolve(heights,bricks,ladders,index,memo)  ; 
     return ans;
    }
};

// it is giveing mle due to constraint we need greedy appraoch
