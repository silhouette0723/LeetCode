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
        vector<vector<int>> quadruplets;
        typedef pair<int, int> Wkij;
        unordered_map<int, Wkij> map;
        sort(nums.begin(), nums.end());
        int n = nums.size();
        for (int i = 0; i < n; i++)
            for (int j = i + 1; j < n; j++)
                map[nums[i] + nums[j]] = {i, j};
        for (auto it = map.begin(); it != map.end(); it++)
        {
            if (map.count(target - it->first) != 0)
            {
                auto jt = map.find(target - it->first);
                Wkij itW = it->second, jtW = jt->second;
                int i = itW.first;
                int j = itW.second;
                int left = jtW.first;
                int right = jtW.second;
                if (i < left)
                    quadruplets.push_back({nums[i], nums[j], nums[left], nums[right]});
            }
        }
        return quadruplets;
    }
};
// @lc code=end
