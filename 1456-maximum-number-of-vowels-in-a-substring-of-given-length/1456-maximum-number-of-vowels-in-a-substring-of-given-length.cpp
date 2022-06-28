#include <cstdarg>

class Solution {
public:
    
    
    int maxVowels(string s, int k) {

        int count = 0;
        char target[5] = { 'a','e','i','o','u' };
        int result = 0;

        for (int i = 0; i < k; i++) {
            for (int j = 0; j < 5; j++) {
                if (s[i] == target[j]) count++;
            }
        }
        if (result < count) {
            result = count;
        }



        for (int i = 1; i <= s.length() - k; i++) {

            for (int j = 0; j < 5; j++) {
                if (s[i - 1] == target[j]) count--;
                if (s[i + k -1 ] == target[j]) count++;
            }
            if (result < count) {
                result = count;
            }
        }


        return result;

        
        
    }

    
    
};