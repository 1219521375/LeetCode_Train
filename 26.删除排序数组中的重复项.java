/*
 * @lc app=leetcode.cn id=26 lang=java
 *
 * [26] 删除排序数组中的重复项
 */

// @lc code=start
class Solution {
    public int removeDuplicates(int[] nums) {
        int len = nums.length;
        int temp = 0;
        if(len <= 1){
            return len;
        }
        int front = 0,rear = 1;
        
        for(front = 0;front < len-1;front++){
            if(nums[front]>=nums[front+1]){
                for(rear = front+1;rear <len;rear++){
                    if(nums[rear] >nums[front]){
                        temp = nums[front+1];
                        nums[front+1] = nums[rear];
                        nums[rear] = temp;
                        break;
                    }
                }
                if(rear == len){
                    return front+1;
                }
            }
            
        }
        return front+1;
    }
}
// @lc code=end

