/*
 * @lc app=leetcode.cn id=2 lang=cpp
 *
 * [2] 两数相加
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution
{
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        int d = 0;
        int curNum = 0;
        ListNode *res = new ListNode(0,nullptr);
        ListNode *cur = res;
        while (l1 != nullptr || l2 != nullptr|| d != 0)
        {
            curNum = 0;
            if (l1 != nullptr)
            {
                curNum += l1->val;
                l1 = l1->next;

            }
            if (l2 != nullptr)
            {
                curNum += l2->val;
                l2 = l2->next;
            }
            curNum += d;
            if (curNum > 9)
            {
                curNum = curNum % 10; //当前节点值
                d = 1;                //有无进位
            }
            else{
                d = 0;
            }
            cur->next = new ListNode(curNum,nullptr);
            cur = cur->next;
        }
        return res->next;
    }
};
// @lc code=end
