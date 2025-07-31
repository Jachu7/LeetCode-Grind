class Solution:
    def longestPalindrome(self, s: str) -> str:
        def palindrom(text):
            return text[::-1]
    
        najdluzszy =""
        for i in range(len(s)):
            pomocnicza =""
            for j in range(len(s)-i):
                pomocnicza += s[i+j]
                if pomocnicza == palindrom(pomocnicza) and len(pomocnicza) > len(najdluzszy):
                    najdluzszy = pomocnicza
        return najdluzszy
