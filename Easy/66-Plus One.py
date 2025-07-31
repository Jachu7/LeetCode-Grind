class Solution:
    def plusOne(self, digits: list[int]) -> list[int]:
        # ostatnia cyfra mniejsza od 9 wiec prosto dodajemy 1
        if digits[-1] < 9:
            digits[-1] += 1
            return digits

        #ostatnia cyfra to 9
        i = -1
        length = -len(digits)

        while i >= length and digits[i] == 9:
            digits[i] = 0
            i -= 1
        
        if i < length:
            return [1] + digits
        else:
            digits[i] += 1
            return digits
