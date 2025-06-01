class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int p1=0;
        for(int p2=0;p2<nums.size();p2++) 
        {
            if (nums[p2]!=0) 
            {
                swap(nums[p2], nums[p1]);
                p1++;
            }
        }
    }
};