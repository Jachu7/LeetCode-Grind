class Solution:
    def uniqueOccurrences(self, arr: List[int]) -> bool:
        mydict = {}
        outputarr = []
        output = True

        for i in range(len(arr)):
            if arr[i] not in mydict:
                mydict[arr[i]] = 1
            else:
                mydict[arr[i]] += 1

        for count in mydict.values():
            if count not in outputarr:
                outputarr.append(count)
            else:
                output = False
                break 
        
        return output
