class Solution:
    def successfulPairs(self, spells: List[int], potions: List[int], success: int) -> List[int]:
        output = []
        potions.sort()

        for i in range(len(spells)):
            low = 0
            top = len(potions)
            while low < top:
                index = low + (top-low) // 2
                if potions[index] * spells[i] >= success:
                    top = index
                elif potions[index] * spells[i] < success:
                    low = index + 1
            output.append(len(potions) - low)

        return output
