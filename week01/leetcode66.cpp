class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> temp;
        vector<int> res;
        int up = 1;
        for (int i = digits.size()-1; i >= 0; i --) {
            int num = digits[i];
            if ((num + up) % 10 == 0 && num != 0) {
                up = 1;
                temp.push_back(0);
            } else {
                temp.push_back(num + up);
                up = 0;
            }
        }
        // 最终存在进位
        if (up == 1) {
            temp.push_back(up);
        }
        // 逆序
        for (int j = temp.size() - 1; j >= 0; j--) {
            res.push_back(temp[j]);
        }
        return res;
    }
};
