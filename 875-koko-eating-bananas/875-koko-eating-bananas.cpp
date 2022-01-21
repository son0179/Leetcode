class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int max = 0;
        unsigned long long sum = 0;
        int _can;
        int _not;
        int len = piles.size();
        for (int i = 0; i < len; i++) {
            if (max < piles[i]) max = piles[i];
            sum += piles[i];
        }
        _not = sum / h -1;
        _can = max / (h / len ) +1;

        if(_not < 0 ) _not = 0;
        while (_not + 1 != _can && _not != _can) {
            int t=0;
            for (int i = 0; i < len; i++) {
                t += 1 + (piles[i] -1) / ((_can + _not) / 2);
            }
            if (t > h) {
                _not = ((_can + _not) / 2);
            }
            else {
                _can = ((_can + _not) / 2);
            }
        }
        return _can;

    }
};