class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       int j=0;
        for(int i=1; i<nums.size(); i++) {
            if(nums[j]!=nums[i]) {
                nums[++j]=nums[i];
            }
        }
        return j+1;
    }
};
//https://leetcode.com/problems/remove-duplicates-from-sorted-array/
