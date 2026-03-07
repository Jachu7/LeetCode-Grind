class Solution:
    def removeStars(self, s: str) -> str:
        output = ""
        i = 0
        while i < len(s):
            if s[i] != "*":
                output += s[i]
            else:
                output = output[:-1]
            i += 1

        return output
