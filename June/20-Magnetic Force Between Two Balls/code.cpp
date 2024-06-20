
class Solution {
public:
bool isPosibileSolution(vector<int>& position, int m,int mid)
{
    int c=1;
    int pos=position[0];
    for(int i=1;i<position.size();i++)
    {
         if(position[i]-pos>=mid)
         {
            c++;
            pos=position[i];
         }
        if(c==m) return true;  
    }
    return false;
   
}
    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(),position.end());
        int start=0;
        int end=position[position.size()-1]-position[0];
        int ans=-1;
        while(start<=end)
        {
            int mid=(start+end)>>1;
            if(isPosibileSolution(position,m,mid))
            {
                ans=mid;
                start=mid+1;
            }
            else
            {
                end=mid-1;
            }
        }
        return ans;
        
    }
};
