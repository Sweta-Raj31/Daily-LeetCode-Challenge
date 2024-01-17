
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        /* This solution is of using hastable and set

        unordered_map<int,int>mp;
         unordered_set<int>st;
         for(auto x:arr)
         {
             mp[x]++;
         }
         for(auto x:mp)
         {  cout<<x.second<<endl;
            st.insert(x.second);
         }
         if(st.size()==mp.size()) return true;
         return false;

         */

        // Now we are solving with araray

        sort(arr.begin(), arr.end());
        vector<int> v;
        for (int i = 0; i < arr.size(); i++) {
            int cnt = 1;
            while (i + 1 < arr.size() && arr[i] == arr[i + 1]) {
                cnt++;
                i++;
            }
            v.push_back(cnt);
        }
        sort(v.begin(), v.end());
        for (int i = 0; i < v.size() - 1; i++) {
            if (v[i] == v[i + 1]) {
                return false;
            }
        }
        return true;
    }
};
