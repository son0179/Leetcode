class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        // just index!!
        if (n <= 0) return true;
        if( flowerbed.size() == 1){
            n -= !flowerbed[0];
            if (n <= 0) return true;
            else return false;
        }
        
        if( !(flowerbed[0] || flowerbed[1]) ){
            n--;
            flowerbed[0]=1;
            if (n <= 0) return true;
        }
        for (int i = 1; i < flowerbed.size()-1; i++) {  // i is index
            if (!(flowerbed[i-1] || flowerbed[i] || flowerbed[i+1])) {
                n--;
                flowerbed[i]=1;
                i+=1;
                if (n <= 0) return true;
            }
        }
        n -= !(flowerbed[flowerbed.size()-2 ] || flowerbed[flowerbed.size()-1 ]);
        if(n<=0) return true;
        return false;
    }
};