int findPeakElement(int* nums, int numsSize){
    int peak;
    if(numsSize<=1)
       return 0;
    else
    {
         for(int i=0;i<numsSize;i++)
         {
            if((i==0 && nums[i]>nums[i+1])||(i==numsSize-1 && nums[i]>nums[i-1])|| ((i>0 && i<numsSize-1) && (nums[i]>=nums[i-1] && nums[i]>=nums[i+1])))
            {
                peak=i;
                break;
            }
        }
   }
   return peak;
}