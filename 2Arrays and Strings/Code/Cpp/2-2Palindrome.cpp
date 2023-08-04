#include <iostream>
using namespace std;

bool checkIfPalindrome(string s) {
    int left = 0;
    int right = s.size() - 1;
    
    while (left < right) {
        if (s[left] != s[right]) {
            return false;
        }
        left++;
        right--;
    }
    
    return true;
}

int main() {
    /* Odd length strings */
    string s = "racecar"; // palindrome
    printf("%d\n", checkIfPalindrome(s));  // 1
    
    s = "aslkd"; // not palindrome
    printf("%d\n", checkIfPalindrome(s)); // 0
    
    /* Even length strings */
    s = "basdab"; // not palindrome
    printf("%d\n", checkIfPalindrome(s)); // 0

    s = "abassaba"; // palindrome
    printf("%d\n", checkIfPalindrome(s));  // 1
    
    return 0;
}
