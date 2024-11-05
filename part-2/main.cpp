#include <bits/stdc++.h>

using namespace std;

class Solution {
  public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        set<int> setNums(nums.begin(), nums.end());
        for (int num = 1; num < nums.size() + 1; num++) {
            if (!setNums.count(num)) {
                return num;
            }
        }
        return n + 1;
    }
};

int main() {
    Solution solution;
    vector<int> nums = {10, 7, 5, 3, 4, 6, 8, 1, 2};
    int result = solution.missingNumber(nums);
    cout << result;
    return 0;
}