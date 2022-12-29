class Solution {
    public void sortColors(int[] nums) {
        int l=0;
        int mid=0;
        int h=nums.length-1;
        int temp;

        while(mid<=h)
        {
            switch(nums[mid])
            {
                case 0:
                temp=nums[l];
                nums[l]=nums[mid];
                nums[mid]=temp;
                l++;mid++;
                break;
                case 1:
                mid++;
                break;
                case 2:
                temp=nums[mid];
                nums[mid]=nums[h];
                nums[h]=temp;
                h--;
                break;
            }
        }
    }
}