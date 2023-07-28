def check_if_palindrome(s):
    left = 0
    right = len(s) - 1

    while left < right:
        if s[left] != s[right]:
            return False
        left += 1
        right -= 1
    
    return True

# Odd length strings
print(check_if_palindrome("racecar")) # True
print(check_if_palindrome("aslkd"))   # False

# Even length strings
print(check_if_palindrome("basdab"))   # False
print(check_if_palindrome("abassaba")) # True

# Time-complexity : O(n)
# Space complexity: O(1)
