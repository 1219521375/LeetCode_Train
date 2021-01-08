/*
 * @lc app=leetcode.cn id=14 lang=cpp
 *
 * [14] 最长公共前缀
 */

// @lc code=start
#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {
        if(strs.size() == 0){
            string res = "";
            return res;
        }
        int minlen = 200;
        int i = 0;
        for (i = 0; i < strs.size(); i++)
        {
            if (strs[i].length() <= minlen)
            {
                minlen = strs[i].length();
            }
        }
        int j = 0;
        int count = 0;  //匹配字符串长度
        for (i = 0; i < minlen; i++)
        {
            for (j = 0; j < strs.size()-1; j++)
            {
                if(strs[j][i] != strs[j+1][i]){
                    break;
                }
            }
            if(j == strs.size()-1)//全对上了
            {
                count++;
            }
            else{
                break;
            }
        }
        string res = strs[0].substr(0, count);
        return res;
    }
};
// @lc code=end
