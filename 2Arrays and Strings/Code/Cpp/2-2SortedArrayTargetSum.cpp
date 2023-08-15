#include<iostream>
#include<vector>

using namespace std;

bool checkForTarget(vector<int>& nums, int target) {
    int left = 0;
    int right = nums.size() - 1;
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

int main() {
    vector<int> s = {1, 2, 4, 6, 8, 9, 14, 15};
    printf("%d\n", checkForTarget(s, 13));  // true

	s = {3, 6, 21, 23, 25};
	printf("%d\n", checkForTarget(s, 27)); // true

    s = {1, 4, 7, 12, 16};
	printf("%d\n", checkForTarget(s, 15)); // false
    return 0;
}

// Time-complexity : O(n)
// Space complexity: O(1)
