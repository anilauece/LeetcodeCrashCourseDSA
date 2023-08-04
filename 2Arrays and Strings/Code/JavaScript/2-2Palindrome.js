/**
 * @param {string} s
 * @return {boolean}
 */
var checkIfPalindrome = function(s) {
    let left = 0;
    let right = s.length - 1;
    
    while (left < right) {
        if (s[left] != s[right]) {
            return false;
        }
        
        left++;
        right--;
    }
    
    return true;
}

// odd length strings
console.log(checkIfPalindrome("racecar")); // prints true
console.log(checkIfPalindrome("aslkd")); // prints false

// even length strings
console.log(checkIfPalindrome("basdab")); // prints false
console.log(checkIfPalindrome("abassaba")); // prints true

// Time-complexity : O(n)
// Space complexity: O(1)
