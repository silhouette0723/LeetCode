/*
 * @lc app=leetcode.cn id=36 lang=cpp
 *
 * [36] 有效的数独
 */

// @lc code=start
class Solution
{
public:
    bool isValidSudoku(vector<vector<char>> &board)
    {
        int row[9][9];
        int column[9][9];
        int subbox[3][3][9];
        memset(row, 0, sizeof(row));
        memset(column, 0, sizeof(column));
        memset(subbox, 0, sizeof(subbox));
        for (int i = 0; i < 9; i++)
            for (int j = 0; j < 9; j++)
            {
                char index = board[i][j];
                int num = -1;
                if (index != '.')
                {
                    num = index - '0' - 1;
                    row[i][num]++;
                    column[j][num]++;
                    subbox[i / 3][j / 3][num]++;
                    if (row[i][num] > 1 || column[j][num] > 1 || subbox[i / 3][j / 3][num] > 1)
                        return false;
                }
            }
        return true;
    }
};
// @lc code=end
