def check_for_target(nums, target):
    left = 0
    right = len(nums) - 1

    while left < right:
        # curr is the current sum
        curr = nums[left] + nums[right]
        if curr == target:
            return True
        if curr > target:
            right -= 1
        else:
            left += 1
    
    return False

# test-cases
print(check_for_target([1, 2, 4, 6, 8, 9, 14, 15], 13)) # true

print(check_for_target([3, 6, 21, 23, 25], 27)) # true

print(check_for_target([1, 4, 7, 12, 16], 15)) # false
