class Solution {
public:
    int romanToInt(string s) {
        map<char, int> rtoi;

        rtoi['I'] = 1;
        rtoi['V'] = 5;
        rtoi['X'] = 10;
        rtoi['L'] = 50;
        rtoi['C'] = 100;
        rtoi['D'] = 500;
        rtoi['M'] = 1000;

        int result = 0;

        for(int i = 0; i < s.length(); i++){
            if(rtoi[s[i]] < rtoi[s[i+1]])
            result -= rtoi[s[i]];

            else
            result += rtoi[s[i]];
        }
        return result;
    }
};
