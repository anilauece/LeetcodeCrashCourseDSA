/**
 * @param {number[]} nums
 * @param {number} target
 * @return {boolean}
 */
var checkForTarget = function(nums, target) {
    let left = 0;
    let right = nums.length - 1;
    
    while (left < right) {
        // curr is the current sum
        let curr = nums[left] + nums[right];
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

console.log(checkForTarget([1, 2, 4, 6, 8, 9, 14, 15], 13)); // prints true

console.log(checkForTarget([3, 6, 21, 23, 25], 27)); // prints true

console.log(checkForTarget([1, 4, 7, 12, 16], 15)); // prints false

// Compilation steps:
// node 2-2SortedArrayTargetSum.js

// Time-complexity : O(n)
// Space complexity: O(1)
