class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int numsSize=nums.size();
        for(int i=0;i<numsSize;i++)
        {   int count=0;
            for(int j=0;j<numsSize;j++)
            {
            if(nums[i]==nums[j])
                count++;
            }
            if(count==1)
                return nums[i];
        }
        return -1;
    }
};