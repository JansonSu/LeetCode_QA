from typing import List


class Solution:
    def search(self, nums: List[int], target: int) -> int:
        for i in range(len(nums)):
            if nums[i] == target:
                return i
        return -1


if __name__ == "__main__":
    nums = [1, 3, 5, 7, 8, 9, 10]

    print("answer: ", Solution().search(nums, 9))
