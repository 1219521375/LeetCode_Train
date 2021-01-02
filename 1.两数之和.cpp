/*
 * @lc app=leetcode.cn id=1 lang=cpp
 *
 * [1] 两数之和
 */

// @lc code=start
#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        int i = 0,j=0;
        vector<int> res;
        for (i = 0; i < nums.size()-1; i++)
        {
            for (j = i + 1; j < nums.size();j++){
                if(nums[i]+nums[j] == target){
                    res.push_back(i);
                    res.push_back(j);
                }
            }
        }
        return res;
    }
};
// @lc code=end
