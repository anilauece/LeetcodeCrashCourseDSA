class Solution {
	public boolean checkForTarget(int[] nums, int target) {
		int left = 0;
		int right = nums.length - 1;

		while (left < right) {
			// curr is the current sum
			int curr = nums[left] + nums[right];
			if (curr == target) {
				return true;
			}

			if (curr > target) {
				right--;
			} else {
				left++;
			}
		}

		return false;
	}
}

class Main {
    public static void main(String[] args) {
        Solution solution = new Solution();

        System.out.println(solution.checkForTarget(new int[]{1, 2, 4, 6, 8, 9, 14, 15}, 13)); // true
	
	int[] nums2 = {1, 4, 7, 12, 16};
	System.out.println(solution.checkForTarget(nums2, 15)); // false
	
	int[] nums3 =  {3, 6, 21, 23, 25};
	System.out.println(solution.checkForTarget(nums3, 27)); // true
    }
};

// Compilation steps:
// javac 2-2SortedArrayTargetSum.java
// java Main

// Time-complexity : O(n)
// Space complexity: O(1)
