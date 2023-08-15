import java.util.List;
import java.util.ArrayList;

class Solution {
	public List<Integer> combine(int[] arr1, int[] arr2) {
		// ans is the answer
		List<Integer> ans = new ArrayList<>();
		int i = 0;
		int j = 0;

		while (i < arr1.length && j < arr2.length) {
			if (arr1[i] < arr2[j]) {
				ans.add(arr1[i]);
				i++;
			} else {
				ans.add(arr2[j]);
				j++;
			}
		}

		while (i < arr1.length) {
			ans.add(arr1[i]);
			i++;
		}

		while (j < arr2.length) {
			ans.add(arr2[j]);
			j++;
		}

		return ans;
	}
}

class Main {
    public static void main(String[] args) {
        Solution solution = new Solution();

	    System.out.println(solution.combine(new int[]{1,4,7,20}, new int[]{3,5,6})); // {1,3,4,5,6,7,20}

	    System.out.println(solution.combine(new int[]{4,8,20}, new int[]{1,5,6,17})); // {1,4,5,6,8,17,20}

	    System.out.println(solution.combine(new int[]{5,6,8,9}, new int[]{1,2,4})); // {1,2,4,5,6,8,9}
    }
};

// Compilation steps:
// javac 2-2Combine.java
// java Main

// Time-complexity : O(n+m)
// Space complexity: O(1)
// Note: We usually don't count the output as extra space.
