bool isMonotonic(int* nums, int numsSize){
    int a,b;
    a=b=0;
    for(int i=0;i<numsSize-1;i++)
    {
        if(nums[i]<=nums[i+1])
        {
            a+=1;
        }
    }
    for(int i=0;i<numsSize-1;i++)
    {
        if(nums[i]>=nums[i+1])
        {
            b+=1;
        }
    }
    if(a==numsSize-1 || b==numsSize-1)
    {
        return true;
    }
    return false;
}