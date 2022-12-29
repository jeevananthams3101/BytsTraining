class Solution {
    public int[] nextGreaterElements(int[] nums) {
        int n=nums.length;
        int nge[]=new int[n];
        Stack<Integer> stack=new Stack<Integer>();
        for(int i=2*n-1;i>=0;i--)
        {
            while(stack.isEmpty()==false && stack.peek()<=nums[i%n]) stack.pop();

            if(i<n)
            {
                if(stack.isEmpty()==false) nge[i]=stack.peek();
                else nge[i]=-1;
            }
            stack.push(nums[i%n]);
        }
        return nge;
    }
}