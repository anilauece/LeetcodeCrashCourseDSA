def isSubsequence(s: str, t: str) -> bool:
    i = j = 0
    while i < len(s) and j < len(t):
        if s[i] == t[j]:
            i += 1
        j += 1

    return i == len(s)

# test-cases
print(isSubsequence("ace", "abcde"))  # true

print(isSubsequence("aec", "abcde"))  # false

print(isSubsequence("abc", "ahbgdc")) # true

print(isSubsequence("axc", "ahbgdc")) # false

# Time-complexity: O(n+m) where
## n: length of string 1
## m: length of string 2

# Space-complexity: O(1)
