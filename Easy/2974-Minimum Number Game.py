class Solution:
    def numberGame(self, nums: List[int]) -> List[int]:
        output = []
        pomocnicza = []

        for i in range (len(nums)):
            pomocnicza.append(min(nums))
            nums.remove(min(nums))
            
            if len(pomocnicza) % 2 == 0:
                output.append(pomocnicza[1])
                output.append(pomocnicza[0])
                pomocnicza = []  
                
        return output
