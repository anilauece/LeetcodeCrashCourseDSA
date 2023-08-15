def combine(arr1, arr2):
    # ans is the answer
    ans = []
    i = j = 0
    while i < len(arr1) and j < len(arr2):
        if arr1[i] < arr2[j]:
            ans.append(arr1[i])
            i += 1
        else:
            ans.append(arr2[j])
            j += 1
    
    while i < len(arr1):
        ans.append(arr1[i])
        i += 1
    
    while j < len(arr2):
        ans.append(arr2[j])
        j += 1
    
    return ans

# test-cases
print(combine([1,4,7,20], [3,5,6]))  # [1,3,4,5,6,7,20]

print(combine([4,8,20], [1,5,6,17])) # [1,4,5,6,8,17,20]

print(combine([5,6,8,9], [1, 2, 4])) # [1,2,4,5,6,8,9]

# Time-complexity: O(n+m) where
## n: length of array 1
## m: length of array 2

# Space-complexity: O(1)
