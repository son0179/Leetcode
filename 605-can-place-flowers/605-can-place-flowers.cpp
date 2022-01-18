class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        // using round queue
        vector<bool> check(3);
        check[0] = flowerbed[0];   // 
        for (int i = 1; i < flowerbed.size(); i++) {  // i is index + 1
            check[i % 3] = flowerbed[i];
            if (!(check[0] || check[1] || check[2])) {
                n--;
                check[ (i-1) % 3] = 1;
            }
            if (n <= 0) return true;
        }
        check[flowerbed.size() % 3] = 0;
        n -= !(check[0] || check[1] || check[2]);
        if(n<=0) return true;
        return false;
    }
};