int singleNumber(int* nums, int numsSize){
    int num=0;
    for(int i=0;i<numsSize;i++)
    {
        num=num^nums[i];
    }
    return num;
}