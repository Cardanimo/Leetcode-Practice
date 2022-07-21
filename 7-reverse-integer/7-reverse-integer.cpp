class Solution 
{
public:
    int reverse(int x) 
    {
        int reverse = 0;
        int num = x;
        
        while (num != 0)
        {
            int ld = num % 10; // last digit
            num = num / 10;
            
            // Check for overflow
            if (reverse > INT_MAX/10 || ((reverse == INT_MAX/10) && (ld > INT_MAX % 10)) )
            {
                return 0;
            }
            // Check for underflow for -ve numbers
            if (reverse < INT_MIN/10  || (reverse == INT_MIN/10  && ld < INT_MIN % 10))
            {
                return 0;
            }
            reverse = (reverse * 10) + ld;
        }
        
        return reverse;
    }
};