/*
 * @lc app=leetcode.cn id=13 lang=cpp
 *
 * [13] 罗马数字转整数
 */

// @lc code=start
#include <iostream>
#include <string>
class Solution
{
public:
    int romanToInt(string s)
    {
        int res = 0;
        int i = 0;
        if(s.length() == 1)
        {
            if(s[0] == 'I')
                return 1;
            else if(s[0] == 'V')
                return 5;
            else if(s[0] == 'X')
                return 10;
            else if(s[0] == 'L')
                return 50;
            else if(s[0] == 'C')
                return 100;
            else if(s[0] == 'D')
                return 500;
            else if(s[0] == 'M')
                return 1000;
        }
        for (i = 0; i <= s.length() - 2; i++)
        {
            if (s[i] == 'I')
            {
                if (s[i + 1] == 'V')
                {
                    res += 4;
                    i++;
                }
                else if (s[i + 1] == 'X')
                {
                    res += 9;
                    i++;
                }
                else
                    res += 1;
            }
            else if (s[i] == 'V')
                res += 5;
            else if (s[i] == 'X')
            {
                if (s[i + 1] == 'L')
                {
                    res += 40;
                    i++;
                }
                else if (s[i + 1] == 'C')
                {
                    res += 90;
                    i++;
                }
                else
                    res += 10;
            }
            else if (s[i] == 'L')
                res += 50;
            else if (s[i] == 'C')
                if (s[i + 1] == 'D')
                {
                    res += 400;
                    i++;
                }
                else if (s[i + 1] == 'M')
                {
                    res += 900;
                    i++;
                }
                else
                    res += 100;
            else if (s[i] == 'D')
                res += 500;
            else if (s[i] == 'M')
                res += 1000;
        }
        if (i == s.length() - 1)
        {
            if(s[i] == 'I')
                res += 1;
            else if(s[i] == 'V')
                res += 5;
            else if(s[i] == 'X')
                res += 10;
            else if(s[i] == 'L')
                res += 50;
            else if(s[i] == 'C')
                res += 100;
            else if(s[i] == 'D')
                res += 500;
            else if(s[i] == 'M')
                res += 1000;
        }
        
        return res;
    }
};
// @lc code=end
