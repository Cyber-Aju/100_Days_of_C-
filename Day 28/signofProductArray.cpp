//https://leetcode.com/problems/sign-of-the-product-of-an-array/?envType=study-plan-v2&envId=programming-skills
#include <vector>

class Solution {
public:
    int arraySign(std::vector<int>& nums) {
        int sign = 1;  // Initialize sign to positive
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0) {
                return 0;  // If any element is 0, the product will be 0
            } else if (nums[i] < 0) {
                sign = -sign;  // Toggle sign for each negative number
            }
        }
        return sign;
    }
};
