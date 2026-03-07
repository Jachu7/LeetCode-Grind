class Solution:
    def asteroidCollision(self, asteroids: List[int]) -> List[int]:
        stack = []

        for curr in asteroids:
            while stack and stack[-1] > 0 and curr < 0:
                diff = curr + stack[-1]

                if diff < 0:
                    stack.pop()
                    continue
                elif diff > 0:
                    curr = 0
                    break
                else:
                    stack.pop()
                    curr = 0
                    break

            if curr:
                stack.append(curr)
        
        return stack
