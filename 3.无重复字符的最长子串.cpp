/*
 * @lc app=leetcode.cn id=3 lang=cpp
 *
 * [3] 无重复字符的最长子串
 */

// @lc code=start
class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        unordered_set<char> occ;
        int n = s.size();
        int rp = -1, ans = 0;
        for (int i = 0; i <= n - 1; i++)
        {
            if (i != 0)
            {
                occ.erase(s[i - 1]);
            }
            while (rp + 1 <= n - 1 && !occ.count(s[rp + 1]))
            {
                occ.insert(s[rp + 1]);
                rp++;
            }
            ans = max(ans, rp - i + 1);
        }
        return ans;
    }
};
// @lc code=end
