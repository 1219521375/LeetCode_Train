/*
 * @lc app=leetcode.cn id=7 lang=cpp
 *
 * [7] 整数反转
 */

// @lc code=start
class Solution
{
public:
    int reverse(int x)
    {
        if(x == -2147483648){
            return 0;
        }
        int isNega = 0;
        if (x < 0)
        {
            isNega = 1;
            x = 0 - x;
        }
        long long resnum = 0;
        const int max = 2147483647;
        const int min = -2147483648;
        int num[10], res[10];
        //-2147483648~2147483647  10
           
        int d = 1000000000;
        int i = 0, lenth = 0;
        for (i = 0; i < 10; i++)
        { //获取每一位的数值
            num[i] = x / d;
            x = x % d;
            d = d / 10;
        }
        for (i = 0; i < 10; i++)
        {
            if (num[i] != 0)
                break;
            lenth++; //10位中有多少无用0   10-lenth == 实际位数
        }
        int actlen = 10 - lenth;
        for (i = actlen - 1; i >= 0; i--)
        {
            res[i] = num[lenth];
            lenth++;
        }
        long long dd = 1;
        for (i = 0; i < actlen-1;i++)
            dd *= 10;   
        for (i = 0; i < actlen; i++)
        {
            resnum += res[i] * dd;
            dd /= 10;
        }
        if(resnum > max ||resnum < min){
            return 0;
        }
        if (isNega == 1)
            resnum = 0 - resnum;
        return resnum;
    }
};
// @lc code=end
