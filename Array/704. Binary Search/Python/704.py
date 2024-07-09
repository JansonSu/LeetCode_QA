from typing import List


class Solution:
    def search(self, nums: List[int], target: int) -> int:
        left = 0
        right = len(nums) - 1
        while left <= right:
            mid = (left + right) // 2
            if target ==nums[mid]:
                return mid
            elif target < nums[mid]:
                right = mid - 1
            else:
                left = mid +1
        return -1


if __name__ == "__main__":
    nums = [1, 3, 5, 7, 8, 9, 10]

    print("answer: ", Solution().search(nums, 9))
