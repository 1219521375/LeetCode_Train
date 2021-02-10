/*
 * @lc app=leetcode.cn id=27 lang=java
 *
 * [27] 移除元素
 */

// @lc code=start
class Solution {
    public int removeElement(int[] nums, int val) {
        int len = 0;
        int rear = nums.length - 1;
        for (int i = 0; i < nums.length; i++) {
            if (nums[i] == val) { //与最后一个元素做交换
                nums[i] = nums[rear];
                nums[rear] = val;
                rear--;
                i--;
            } else {
                len++;
            }
            if(i == rear){
                break;
            }
        }

        return len;
    }
}
// @lc code=end

