class Solution {
    public int longestConsecutive(int[] nums) {
        Set<Integer> hashSet=new HashSet<Integer>();
        for(int num:nums)
        {
            hashSet.add(num);
        }
        int maxLen=0;
        for(int num:nums)
        {
            if(!hashSet.contains(num-1))
            {
                int currentNum=num;
                int currentLen=1;
            
            while(hashSet.contains(currentNum+1))
            {
                currentNum+=1;
                currentLen+=1;
            }
            maxLen=Math.max(currentLen,maxLen);
            }
        }
        return maxLen;
        
    }
}