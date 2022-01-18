class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        bool frontcheck;
        bool backcheck;
        for(int i=0 ; i<flowerbed.size(); i++){
            
            if(i == 0) frontcheck=true;
            else if(flowerbed[i-1] == 0) frontcheck=true;
            else frontcheck=false;
            
            
            if(i == flowerbed.size()-1) backcheck=true;
            else if(flowerbed[i+1] == 0) backcheck=true;
            else backcheck=false;
            
            if(frontcheck && backcheck && !flowerbed[i]){
                flowerbed[i]=1;
                n--;
            }
            
            if(n<=0) return true;
        }
        return false;
    }
};