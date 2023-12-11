//https://leetcode.com/problems/move-zeroes/?envType=study-plan-v2&envId=programming-skills
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int nz=0;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            if(nums[i]!=0)
            {
                nums[nz]=nums[i];
                nz++;
            }
        }
        for(int i=nz;i<n;i++)
        {
            nums[i]=0;
        }

    }
};