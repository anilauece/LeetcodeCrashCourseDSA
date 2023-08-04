class Solution {
    public boolean checkIfPalindrome(String s) {
        int left = 0;
        int right = s.length() - 1;

        while (left < right) {
            if (s.charAt(left) != s.charAt(right)) {
                return false;
            }

            left++;
            right--;
        }

        return true;
    }
}

class Main {
    public static void main(String[] args) {
        Solution solution = new Solution();
		    /* Odd length strings */
      
        System.out.println(solution.checkIfPalindrome("racecar")); // prints true
		    System.out.println(solution.checkIfPalindrome("aslkd")); // prints false
		
		    /* Even length strings */
		    System.out.println(solution.checkIfPalindrome("basdab")); // prints false
		    System.out.println(solution.checkIfPalindrome("abassaba")); // prints true
    }
};

/* Compilation steps */
// javac 2-2Palindrome.java
// java Main
