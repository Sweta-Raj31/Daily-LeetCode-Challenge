
//next grater, next smaller ,just prev grate,r just prev smaller using stack or we can say monotonic stack
class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        vector<int>ans(temp.size(),0);
      /*  for(int i=0;i<temp.size();i++)
        {
            for(int j=i+1;j<temp.size();j++)
            {
                if(temp[i]<temp[j])
                {
                    ans[i]=abs(j-i);
                    break;
                }
            }
        }
        return ans;
    the brute force approach of n^2 complexity we will reduce it using stack   
        */
        stack<int>st;
        
        for(int index=temp.size()-1;index>=0;index--)
        {
          

          while(!st.empty() && temp[st.top()]<=temp[index])
          {
               st.pop();
          }
          if(st.empty())
          {
              ans[index]=0;

          }
          else
          {
              ans[index]=st.top()-index;
          }
          st.push(index);

        }
        return ans;
    }
};
