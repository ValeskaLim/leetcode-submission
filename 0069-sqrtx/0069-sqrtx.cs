public class Solution {
    public int MySqrt(int x) {
        if (x < 2) return x;

        long left = 1;
        long right = x;
        long mid = 0;
        long square = 0;
        while(left <= right) {
            mid = left + (right - left) / 2;
            square = mid * mid;

            if(square == x) 
                return (int)mid;
            if(square < x)
                left = mid + 1;
            if(square > x)
                right = mid - 1;
        }
        return (int)left - 1;
    }
}