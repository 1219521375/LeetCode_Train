/*
 * @lc app=leetcode.cn id=9 lang=cpp
 *
 * [9] 回文数
 */

// @lc code=start
class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
            return false;
        int origin = x;
        long long d = 10;
        long long res = 0;
        while(origin != 0){ // 根据整数反转题解
            int pop = origin % d;  //初始为个位
            origin /= 10;
            res = res * 10 + pop;
        }
        if(res == x)
            return true;
        else
            return false;

    }
};
// @lc code=end

