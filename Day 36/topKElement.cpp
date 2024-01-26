  /*class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_set <int> a;
        int count=0;
        for(int i=0; i<nums.size(); ++i)
        {
            if(nums[i]==nums[i+1])
            {
                count++;
                if(count >= k)
                {
                a.insert(nums[i]);
                }
            }     
            else if(nums[i]==k)
            {
                a.insert(nums[i]);
            }
        }
        return vector<int>(a.begin(), a.end());
    }
};*///https://leetcode.com/problems/top-k-frequent-elements/submissions/1157492787/
