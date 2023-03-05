class Solution {
public:
    vector<string> cellsInRange(string s) {
        vector<string> ret;
        
        int num1 = s[1] - '0';
        int num2 = s[4] - '0';
        
        int ch1 = s[0];
        int ch2 = s[3];
        
        for(int i = ch1; i <= ch2; i++) {
            char ch = (char) i;

            for(int j = num1; j <= num2; j++) {
                string str = "";
                str += ch + to_string(j);
                ret.push_back(str);
            }
        }
        
        return ret;
    }
};
