class Solution {
public:
    vector<int> countBits(int n) {

        vector<int> ans;

        for(int b = 0; b <= n; b++) {

            int x = b;
            int res = 0;

            while(x) {
                x &= x - 1;
                res++;
            }

            ans.push_back(res);
        }

        return ans;
    }
};
