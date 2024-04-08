class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int wantCircular=0;
        int wantSquare=0;
        for(auto x:students)
        {
            if(x==0)
            wantCircular++;
            else
            wantSquare++;
        }
        for(auto x:sandwiches)
        {
            if(x==0)
            {
                if(wantCircular==0)
                 return wantSquare;
                 else
                 {
                    wantCircular--;
                 }
            }
            else
            {
               if(wantSquare==0)
                 return wantCircular;
                 else
                 {
                    wantSquare--;
                 } 
            }
        }
        return 0;
        
    }
};
