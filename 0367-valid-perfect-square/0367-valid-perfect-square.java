class Solution {
    public boolean isPerfectSquare(int num) {
        if(num%(Math.sqrt(num))==0) return true;
        else return false;
    }
}