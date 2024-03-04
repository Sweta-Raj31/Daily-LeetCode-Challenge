
//2 pointers and greedy approach

class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        sort(tokens.begin(),tokens.end());
        int left=0;
        int right=tokens.size()-1;
        int score=0;
        int maxScore=0;
        while(left<=right) // we cannot use = because for single element we cannot perform both operation
        {
            if(power>=tokens[left])
            {
               //face up 
               cout<<tokens[left]<<endl;
               power-=tokens[left] ;
               left++;
               score++;
               maxScore=max(score,maxScore);
            }
           else if(score>0)
            {
                //face down 
                cout<<"face down"<<tokens[right]<<endl;
                power+=tokens [right];
                right--;
                score--;
            }
            else

            {
                break;
            }
        }
        return maxScore;

        
    }
};
