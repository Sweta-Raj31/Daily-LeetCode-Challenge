
class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        //1. get size of hand
        int n=hand.size();

        //2. check whether hand can be divided into groups or not
        if(n%groupSize)return false;

        //3. creating ordered map(default increasing, no need of sorting)
        map<int,int> mp;
        for(int i:hand){
            mp[i]++;
        }

        //4. Just simulate the stuff said in question
        // consecutive cards = cards with diff one
        for(int i=0;i<n/groupSize;i++){
            int prevCard=-1, count=0;

            for(auto j:mp){
                if(prevCard!=-1){
                    //checking cards are consecutive or not
                    if(abs(j.first-prevCard)!=1)return false;
                }

                // update prev card
                prevCard=j.first;

                // removing card from map
                mp[j.first]--;
                if(mp[j.first]==0){
                    mp.erase(j.first);
                }
                
                // counting cards in the group and break loop once group filled with cards
                count++;
                if(count==groupSize)break;
            }

        }

        // returns true if we can divide our hand into groups, else false
        return mp.size()==0;
    }
};
