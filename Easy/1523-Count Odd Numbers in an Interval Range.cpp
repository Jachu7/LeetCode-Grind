class Solution {
public:
    int countOdds(int low, int high) {
        int amountBetween = high - low + 1;
        if(amountBetween % 2 == 0){
            return amountBetween / 2;
        }
        else{
            if (low % 2 != 0) {
                return (amountBetween / 2) + 1;
            } else {
                return amountBetween / 2;
            }
        }
        return 0;
    }
};
