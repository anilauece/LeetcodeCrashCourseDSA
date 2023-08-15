/**
 * @param {number[]} arr1
 * @param {number[]} arr2
 * @return {number[]}
 */
var combine = function(arr1, arr2) {
    // ans is the answer
    let ans = [];
    let i = 0, j = 0;
    
    while (i < arr1.length && j < arr2.length) {
        if (arr1[i] < arr2[j]) {
            ans.push(arr1[i]);
            i++;
        } else {
            ans.push(arr2[j]);
            j++;
        }
    }
    
    while (i < arr1.length) {
        ans.push(arr1[i]);
        i++;
    }
    
    while (j < arr2.length) {
        ans.push(arr2[j]);
        j++;
    }
    
    return ans;
}

console.log(combine([1,4,7,20], [3,5,6]));   // prints [1,3,4,5,6,7,20]

console.log(combine([4,8,20], [1,5,6,17]));  // prints [1,4,5,6,8,17,20]

console.log(combine([5,6,8,9], [1,2,4]));  // prints [1,2,4,5,6,8,9]

// Compilation steps:
// node 2-2Combine.js

// Time-complexity : O(n+m)
//   n: length of array 1
//   m: length of array 2

// Space complexity: O(1)
