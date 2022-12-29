class Solution {
    public int largestRectangleArea(int[] heights) {
        int n=heights.length;
        int leftSmall[]=new int[n];
        int rightSmall[]=new int[n];
        Stack<Integer> stack=new Stack<Integer>();
        for(int i=0;i<n;i++)
        {
            while(!stack.isEmpty() && heights[stack.peek()] >= heights[i]) stack.pop();

            if(stack.isEmpty()) leftSmall[i]=0;
            else leftSmall[i]=stack.peek()+1;

            stack.push(i);
        }
        while(!stack.isEmpty()) stack.pop();

        for(int i=n-1;i>=0;i--)
        {
            while(!stack.isEmpty() && heights[stack.peek()] >= heights[i]) stack.pop();

            if(stack.isEmpty()) rightSmall[i]=n-1;
            else rightSmall[i]=stack.peek()-1;

            stack.push(i);
        }

        int maxA=0;
        for(int i=0;i<n;i++)
        {
            maxA=Math.max(maxA,heights[i]*(rightSmall[i]-leftSmall[i]+1));
        }
        return maxA;
    }
}