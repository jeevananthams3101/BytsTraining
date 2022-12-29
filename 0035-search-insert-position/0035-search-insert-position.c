int searchInsert(int* nums, int numsSize, int target){
    for(int i=0;i<numsSize;i++)
    {
        if(target==nums[i]) return i;
    }
    int pos=0,ret;
    for(int i=0;i<numsSize;i++)
    {
        if(target<nums[i])
        {
            ret=i;
            break;
        }
        if(target>nums[i])
        {
            pos+=1;
        }
    }
    if(pos==numsSize)
    {
        return numsSize;
    }
    else
    {
        return ret;
    }
}