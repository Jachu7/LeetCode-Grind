class Solution:
    def rotate(self, nums: List[int], k: int) -> None:
        pomocnicza = []
        do_zwrotu = []
        nowe_k = k % len(nums)
        for i in range(nowe_k,0,-1):
            pomocnicza.append(nums[-i])
        
        do_zwrotu = pomocnicza.copy()
        for i in range(len(nums)-nowe_k):
            do_zwrotu.append(nums[i])
        
        for i in range(len(nums)):
            nums[i] = do_zwrotu[i]
        
