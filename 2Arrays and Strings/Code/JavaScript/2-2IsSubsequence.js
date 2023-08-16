/**
 * @param {string} s
 * @param {string} t
 * @return {boolean}
 */
var isSubsequence = function(s, t) {
    let i = 0, j = 0;
    while (i < s.length && j < t.length) {
        if (s[i] == t[j]) {
            i++;
        }
        
        j++;
    }
    
    return i == s.length;
};

// Test-cases
console.log(isSubsequence("ace", "abcde"));   // true

console.log(isSubsequence("aec", "abcde"));   // false

console.log(isSubsequence("abc", "ahbgdc"));  // true

console.log(isSubsequence("axc", "ahbgdc"));  // false

// Compilation steps:
// node 2-2IsSubsequence.js

// Time-complexity : O(n+m)
//   n: length of array 1
//   m: length of array 2

// Space complexity: O(1)
