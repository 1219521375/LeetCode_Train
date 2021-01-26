/*
 * @lc app=leetcode.cn id=21 lang=java
 *
 * [21] 合并两个有序链表
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode mergeTwoLists(ListNode l1, ListNode l2) {
        if(l1 == null){
            return l2;
        }
        if(l2 == null){
            return l1;
        }
        ListNode res = l1.val <= l2.val ? l1:l2;  // 小
        ListNode res2 = l1.val <= l2.val ? l2:l1;  // 大
        ListNode rescur = res;
        ListNode res2r;
        ListNode temp1,temp2;
        while(rescur!=null&&res2!=null){
            if(rescur.next != null){ //res串 后不为空
                if(res2.val <=rescur.next.val){//res2 - res2r插入到cur后
                    res2r = res2;
                    while(res2r.next != null && res2r.next.val<=rescur.next.val){
                        res2r = res2r.next;
                    }
                    temp1 = rescur.next;
                    temp2 = res2r.next;
                    res2r.next = rescur.next;
                    rescur.next = res2;
                    rescur = temp1;
                    res2 = temp2;
                }else{
                    rescur = rescur.next;
                }
            }else{ // res 后为空
                rescur.next = res2;
                return res;
            }
        }
        return res;
    }
}
// @lc code=end

