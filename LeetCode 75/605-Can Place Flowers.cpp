class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        bool flag = false;

        if (flowerbed.size() >= 3) {
            // edgey
            if (flowerbed[0] == 0 && flowerbed[1] == 0) {
                n -= 1;
                flowerbed[0] = 1;
            }
            if (flowerbed[flowerbed.size() - 1] == 0 && flowerbed[flowerbed.size() - 2] == 0) {
                n -= 1;
                flowerbed[flowerbed.size() - 1] = 1;
            }

            for (int i = 1; i < flowerbed.size() - 2; i++) {
                if (flowerbed[i] == 1) {
                    continue;
                }
                else {
                    if (flowerbed[i - 1] == 0 && flowerbed[i + 1] == 0) {
                        n -= 1;
                        flowerbed[i] = 1;
                    }
                }
                if (n <= 0) {
                    flag = true;
                    break;
                }
                else {
                    flag = false;
                }
            }
            flag = (n <= 0);
            return flag;
        }
        else {
            //size 2 lub mniej
            // [] [1] [0,1]
            switch (flowerbed.size()) {
                case 0:
                    if (n<=1) {
                        return true;
                    }
                    else {
                        return false;
                    }
                    break;
                case 1:
                    if ((n == 1 && flowerbed[0] == 0) || (n == 0 )) {
                        return true;
                    }
                    else {
                        return false;
                    }
                    break;
                case 2:
                    if ((n == 1 && flowerbed[0] == 0 && flowerbed[1] == 0) || (n==0)) {
                        return true;
                    }
                    else {
                        return false;
                    }
                    break;
            }
        }
        return true;
    }
};
