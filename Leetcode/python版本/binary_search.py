from typing import List


class Solution:
    def search(self, nums: List[int], target: int) -> int:
        target = 0
        for item in nums:
            if self == item:
                target