class Solution {
    public int onesBit(int bit,int count)
    {
    if(bit==0) return 0;
    return count+bit%2+onesBit(bit/2,count);
    }

    public int[] countBits(int n) {
    int a[]=new int[n+1];
    for(int i=0;i<=n;i++)
    {
        int sum=0;
        a[i]=onesBit(i,sum);
    }
    return a;

    }
}