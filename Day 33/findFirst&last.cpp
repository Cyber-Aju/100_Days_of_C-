//https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ind = {-1,-1};
        for(int i=0; i<nums.size(); ++i)
        {
            if(nums[i]==target)
            {
                if(ind[0]==-1)
                {
                    ind[0]=i;
                }
                    ind[1]=i;
            }
       
        }
        return ind;
    }
};