class Solution {
    public int findMaxConsecutiveOnes(int[] nums) {
        int cc=0,mc=0;
        for(int i=0;i<nums.length;i++)
        {
            if(nums[i]==1)
            {
                cc+=1;
            }
            else
            {
                mc=Math.max(mc,cc);
                cc=0;
            }
        }
        mc=Math.max(mc,cc);
        return mc;
    }
}