/*
 * @lc app=leetcode.cn id=18 lang=cpp
 *
 * [18] 四数之和
 */

// @lc code=start
class Solution
{
public:
    vector<vector<int>> fourSum(vector<int> &nums, int target)
    {
        unordered_map<int, int> map;
        sort(nums.begin(), nums.end());
        n = nums.size();
        for (int i = 0; i < n; i++)
            for (int j = i + 1; j < n; j++)
                map[i, j] = nums[i] + nums[j];
    }
};
// @lc code=end
