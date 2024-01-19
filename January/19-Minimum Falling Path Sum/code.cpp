
class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();
        // cout<<row<<" "<<col<<endl;
        vector<vector<int>> memo(row, vector<int>(col, 0));
        for (int index = 0; index < col; index++)

        {
            memo[0][index] = matrix[0][index];
            // cout<<memo[0][index]<<endl;
        }
        for (int rowIndex = 1; rowIndex < row; rowIndex++) {
            for (int colIndex = 0; colIndex < col; colIndex++) {
                int ld = INT_MAX, rd = INT_MAX;
                // 3 possible paths are direclty up(up) diagonally up-left(ld)
                // and diagonally up right (rd)
                int up =
                    matrix[rowIndex][colIndex] + memo[rowIndex - 1][colIndex];
                // cout<<up<<" ";
                // for going to up left diagonal we have make sure we are not of
                // the matrix
                if (colIndex - 1 >= 0) {
                    ld = matrix[rowIndex][colIndex] +
                         memo[rowIndex - 1][colIndex - 1];
                }
                // for going to up right diagonal we have make sure we are not
                // of the matrix
                if (colIndex + 1 < col) {
                    rd = matrix[rowIndex][colIndex] +
                         memo[rowIndex - 1][colIndex + 1];
                }
                // cout<<endl;
                // cout<<ld<<" "<<rd<<endl;

                memo[rowIndex][colIndex] = min(up, min(ld, rd));
            }
        }
        for (int rowIndex = 0; rowIndex < row; rowIndex++) {
            for (int colIndex = 0; colIndex < col; colIndex++) {
                cout << memo[rowIndex][colIndex] << " ";
            }
            cout << endl;
        }
        int mini = memo[row - 1][0];
        for (int index = 1; index < col; index++) {
            mini = min(mini, memo[row - 1][index]);
        }
        return mini;
    }
};
