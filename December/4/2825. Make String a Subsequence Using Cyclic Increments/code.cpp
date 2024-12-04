class Solution {
public:
    bool canMakeSubsequence(string str1, string str2) {
        int j = 0;
        int n = str2.size();

        for(int i = 0; i < str1.size(); i++){
            char temp = (str1[i] != 'z') ? 1 + str1[i]: 'a';
            if(str1[i] == str2[j] || temp == str2[j]){
                j++;
                if(j == n){
                    return true;
                }
            }
        }
        return false;
    }
};
