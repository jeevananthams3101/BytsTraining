class Solution {
    public boolean checkPerfectNumber(int num) {
        int sum=1;
        for(int i=2;i*i<=num;i++)
        {
            if(num%i==0)
                if(i*i!=num) sum+=i+num/i;
                else sum+=i;
        }
        if(sum==num && num!=1) return true;
        else return false;
    }
}