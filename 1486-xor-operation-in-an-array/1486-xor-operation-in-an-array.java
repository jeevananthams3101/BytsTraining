class Solution {
    public int xorOperation(int n, int start) {
        int nums[]=new int[n];
        for(int i=0;i<n;i++)
        {
            nums[i]=start+2*i;
        }
        int xor=nums[0];
        for(int i=0;i<n-1;i++)
        {
            xor=xor^nums[i+1];
        }
        return xor;
    }
}