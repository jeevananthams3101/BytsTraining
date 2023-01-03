class Solution {
    public int[] searchRange(int[] nums, int target) {
        int startEnd[]=new int[2];
        startEnd[0]=-1;
        startEnd[1]=-1;
        int start=0,end=0;
        int len=nums.length;
        for(int i=0,j=len-1;i<len&&j>=0;i++,j--)
        {
            if(start==0 && nums[i]==target)
            {
                startEnd[0]=i;
                start=1;
            }
            if(end==0 && nums[j]==target)
            {
                startEnd[1]=j;
                end=1;
            }
            if(start==1 && end==1)
                return startEnd;
        }
        return startEnd;
    }
}