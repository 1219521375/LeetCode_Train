/*
 * @lc app=leetcode.cn id=3 lang=java
 *
 * [3] 无重复字符的最长子串
 */

// @lc code=start
class Solution {
    public int lengthOfLongestSubstring(String s) {
        int left = 0;
        int right=-1;
        int maxlen = 0;
        int slen = s.length();
        HashSet<Character> chars = new HashSet<>();
        for(left = 0;left <slen;left++){
            if (left != 0) {
                // 左指针向右移动一格，移除一个字符
                chars.remove(s.charAt(left - 1));
            }
            while (right + 1 < slen && !chars.contains(s.charAt(right + 1))) {
                // 不断地移动右指针
                chars.add(s.charAt(right + 1));
                right++;
            }
            // 第 i 到 rk 个字符是一个极长的无重复字符子串
            maxlen = Math.max(maxlen, right - left + 1);
        }

        return maxlen;
    }

}
// @lc code=end

