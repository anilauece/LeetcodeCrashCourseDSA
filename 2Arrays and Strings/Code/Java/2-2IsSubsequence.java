
class Solution {
    public boolean isSubsequence(String s, String t) {
        int i = 0;
        int j = 0;
        
        while (i < s.length() && j < t.length()) {
            if (s.charAt(i) == t.charAt(j)) {
                i++;
            }
            j++;
        }
        return i == s.length();
    }
}

class Main {
    public static void main(String[] args) {
	Solution solution = new Solution();
      
	System.out.println(solution.isSubsequence("ace", "abcde")); // true

      	System.out.println(solution.isSubsequence("aec", "abcde")); // false

	System.out.println(solution.isSubsequence("abc", "ahbgdc")); // true
      
      	System.out.println(solution.isSubsequence("axc", "ahbgdc")); // false
    }
};

// Compilation steps:
// javac 2-2IsSubsequence.java
// java Main

// Time-complexity : O(n+m)
// Space complexity: O(1)
