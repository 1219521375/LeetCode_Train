/*
 * @lc app=leetcode.cn id=20 lang=java
 *
 * [20] 有效的括号
 */

// @lc code=start
class Solution {
    public boolean isValid(String s) {
        Stack<Character> chars = new Stack<>();
        for (int i = 0; i < s.length(); i++) {
            if(chars.empty() || !isPart(chars.peek(),s.charAt(i))){ //空 或 不匹配
                chars.push(s.charAt(i));
            }else if(isPart(chars.peek(),s.charAt(i))){
                chars.pop();
            }
        }
        return chars.empty();
    }
    public static boolean isPart(char a,char b){
        if(a == '('&&b ==')'){
            return true;
        }else if(a == '['&&b ==']'){
            return true;
        }else if(a == '{'&&b =='}'){
            return true;
        }else{
            return false;
        }
    }
}
// @lc code=end

