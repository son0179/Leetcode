class Solution {
public:
    int countPoints(string rings) {
        int rod[10] = {1,1,1,1,1,1,1,1,1,1};
        int color[255]={0};
        int result = 0;
        color['R'] = 2;
        color['G'] = 3;
        color['B'] = 5;
        
        //# 1 : NOT THING
        
        //# 2 : RED
        //# 3 : GREEN
        //# 5 : BLUE
        
        //# 6 : R,G (2*3)
        //# 10 : R,B (2*5)
        //# 15 : G,B (3*5)
        
        //# 30 : R,G,B (2*3*5)
        // FIND 30
        
        for(int i=0 ; i<rings.size()-1 ; i+=2){
            
            if(rod[rings[i+1]-'0']%color[rings[i]] != 0 ){
                rod[rings[i+1]-'0']*=color[rings[i]];
            }
            
        }
        
        for(int i=0 ; i<10; i++){
            if(rod[i]==30) result++;
        }
        return result;
        
        
    }
};